#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/lock.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "driver/i2s_std.h"

#include "esp_log.h"

#include "lvgl_user.h"
#include "screens.h"
#include "sdspi.h"
#include "spi_shared_lock.h"
#include "sys_init.h"

#include "mp3_screen_calls.h"

#define MP3_READ_CHUNK_BYTES 2048U
#define MP3_DEFAULT_VOLUME_PERCENT 20U
#define MP3_UI_REFRESH_INTERVAL_MS 200U

typedef struct {
	uint16_t num_channels;
	uint32_t sample_rate;
	uint16_t bits_per_sample;
	uint32_t data_offset;
	uint32_t data_size;
	uint32_t byte_rate;
} wav_info_t;

typedef struct {
	char id[4];
	uint32_t size;
} __attribute__((packed)) wav_chunk_header_t;

typedef enum {
	MP3_CMD_NONE = 0,
	MP3_CMD_TOGGLE_PAUSE,
	MP3_CMD_NEXT,
	MP3_CMD_PREV,
	MP3_CMD_RELOAD
} mp3_cmd_t;

typedef struct {
	sdspi_file_list_t files;
	bool playlist_loaded;
	int current_index;

	bool paused;
	bool playing;
	bool exit_requested;

	mp3_cmd_t pending_cmd;
	bool deepsleep_pause;   /* 深度睡眠时强制暂停 */
	uint8_t volume_percent;

	uint32_t track_duration_ms;
	uint32_t track_position_ms;
} mp3_state_t;

typedef struct {
	bool playlist_loaded;
	size_t file_count;
	int current_index;
	bool paused;
	bool playing;
	uint8_t volume_percent;
	uint32_t track_duration_ms;
	uint32_t track_position_ms;
	char current_path[SDSPI_MAX_PATH_LEN];
} mp3_ui_snapshot_t;

static const char *TAG = "mp3_screen";
static TaskHandle_t s_mp3_task_handle = NULL;
static lv_timer_t *s_mp3_ui_timer = NULL;
static portMUX_TYPE s_mp3_lock = portMUX_INITIALIZER_UNLOCKED;
static bool s_ui_dirty = true;
static mp3_state_t s_state = {
	.playlist_loaded = false,
	.current_index = 0,
	.paused = true,
	.playing = false,
	.exit_requested = false,
	.deepsleep_pause = false,
	.pending_cmd = MP3_CMD_NONE,
	.volume_percent = MP3_DEFAULT_VOLUME_PERCENT,
	.track_duration_ms = 0,
	.track_position_ms = 0,
};

static void s_update_ui_from_snapshot(const mp3_ui_snapshot_t *snapshot);
static void s_refresh_ui_timer_cb(lv_timer_t *timer);

static void s_mark_ui_dirty(void)
{
	portENTER_CRITICAL(&s_mp3_lock);
	s_ui_dirty = true;
	portEXIT_CRITICAL(&s_mp3_lock);
}

static void s_apply_volume_16bit(int16_t *samples, size_t sample_count, uint8_t volume_percent)
{
	for (size_t i = 0; i < sample_count; i++) {
		int32_t scaled = ((int32_t)samples[i] * volume_percent) / 100;
		if (scaled > 32767) {
			scaled = 32767;
		} else if (scaled < -32768) {
			scaled = -32768;
		}
		samples[i] = (int16_t)scaled;
	}
}

static bool s_get_cmd(mp3_cmd_t *out_cmd)
{
	bool has_cmd = false;
	portENTER_CRITICAL(&s_mp3_lock);
	if (s_state.pending_cmd != MP3_CMD_NONE) {
		*out_cmd = s_state.pending_cmd;
		s_state.pending_cmd = MP3_CMD_NONE;
		has_cmd = true;
	}
	portEXIT_CRITICAL(&s_mp3_lock);
	return has_cmd;
}

static bool s_is_exit_requested(void)
{
	bool exit_requested;
	portENTER_CRITICAL(&s_mp3_lock);
	exit_requested = s_state.exit_requested;
	portEXIT_CRITICAL(&s_mp3_lock);
	return exit_requested;
}

static int s_clamp_slider_volume(int value)
{
	int clipped = value;
	if (clipped < 0) {
		clipped = 0;
	}
	if (clipped > 10) {
		clipped = 10;
	}
	return clipped;
}

static const char *s_basename(const char *path)
{
	const char *slash = strrchr(path, '/');
	return slash == NULL ? path : slash + 1;
}

static void s_format_mmss(uint32_t total_seconds, char *out, size_t out_size)
{
	uint32_t minutes = total_seconds / 60U;
	uint32_t seconds = total_seconds % 60U;
	snprintf(out, out_size, "%02lu:%02lu", (unsigned long)minutes, (unsigned long)seconds);
}

static esp_err_t s_parse_wav_header(FILE *f, wav_info_t *out_info)
{
	uint8_t riff_header[12];
	bool fmt_found = false;
	bool data_found = false;

	if (fread(riff_header, 1, sizeof(riff_header), f) != sizeof(riff_header)) {
		return ESP_FAIL;
	}

	if (memcmp(riff_header, "RIFF", 4) != 0 || memcmp(&riff_header[8], "WAVE", 4) != 0) {
		return ESP_ERR_INVALID_ARG;
	}

	while (!data_found) {
		wav_chunk_header_t chunk;
		size_t read_len = fread(&chunk, 1, sizeof(chunk), f);
		if (read_len == 0) {
			break;
		}
		if (read_len != sizeof(chunk)) {
			return ESP_FAIL;
		}

		if (memcmp(chunk.id, "fmt ", 4) == 0) {
			uint8_t fmt_data[16];
			if (chunk.size < sizeof(fmt_data)) {
				return ESP_ERR_INVALID_SIZE;
			}
			if (fread(fmt_data, 1, sizeof(fmt_data), f) != sizeof(fmt_data)) {
				return ESP_FAIL;
			}

			uint16_t audio_format = (uint16_t)(fmt_data[0] | (fmt_data[1] << 8));
			out_info->num_channels = (uint16_t)(fmt_data[2] | (fmt_data[3] << 8));
			out_info->sample_rate = (uint32_t)(fmt_data[4] | (fmt_data[5] << 8) | (fmt_data[6] << 16) | (fmt_data[7] << 24));
			out_info->byte_rate = (uint32_t)(fmt_data[8] | (fmt_data[9] << 8) | (fmt_data[10] << 16) | (fmt_data[11] << 24));
			out_info->bits_per_sample = (uint16_t)(fmt_data[14] | (fmt_data[15] << 8));
			fmt_found = true;

			if (audio_format != 1) {
				return ESP_ERR_NOT_SUPPORTED;
			}

			if (chunk.size > sizeof(fmt_data)) {
				if (fseek(f, (long)(chunk.size - sizeof(fmt_data)), SEEK_CUR) != 0) {
					return ESP_FAIL;
				}
			}
		} else if (memcmp(chunk.id, "data", 4) == 0) {
			out_info->data_offset = (uint32_t)ftell(f);
			out_info->data_size = chunk.size;
			data_found = true;
		} else {
			if (fseek(f, (long)chunk.size, SEEK_CUR) != 0) {
				return ESP_FAIL;
			}
		}

		if (chunk.size & 0x1U) {
			if (fseek(f, 1, SEEK_CUR) != 0) {
				return ESP_FAIL;
			}
		}
	}

	if (!fmt_found || !data_found) {
		return ESP_ERR_NOT_FOUND;
	}

	if (out_info->bits_per_sample != 16) {
		return ESP_ERR_NOT_SUPPORTED;
	}
	if (out_info->num_channels != 1 && out_info->num_channels != 2) {
		return ESP_ERR_NOT_SUPPORTED;
	}
	if (out_info->byte_rate == 0) {
		return ESP_ERR_INVALID_SIZE;
	}

	return ESP_OK;
}

static bool s_take_ui_snapshot(mp3_ui_snapshot_t *snapshot)
{
	bool dirty = false;

	if (snapshot == NULL) {
		return false;
	}

	portENTER_CRITICAL(&s_mp3_lock);
	dirty = s_ui_dirty;
	s_ui_dirty = false;
	snapshot->playlist_loaded = s_state.playlist_loaded;
	snapshot->file_count = s_state.files.count;
	snapshot->current_index = s_state.current_index;
	snapshot->paused = s_state.paused;
	snapshot->playing = s_state.playing;
	snapshot->volume_percent = s_state.volume_percent;
	snapshot->track_duration_ms = s_state.track_duration_ms;
	snapshot->track_position_ms = s_state.track_position_ms;
	snapshot->current_path[0] = '\0';
	if (s_state.playlist_loaded && s_state.files.count > 0 &&
		s_state.current_index >= 0 && s_state.current_index < (int)s_state.files.count) {
		(void)snprintf(snapshot->current_path,
				   sizeof(snapshot->current_path),
				   "%s",
				   s_state.files.paths[s_state.current_index]);
	}
	portEXIT_CRITICAL(&s_mp3_lock);

	return dirty;
}

static void s_update_ui_from_snapshot(const mp3_ui_snapshot_t *snapshot)
{
	const char *title = "无音频文件";
	uint32_t duration_sec = 0;
	uint32_t position_sec = 0;
	char time_text[24];
	char pos_text[8];
	char dur_text[8];
	char file_count_text[24];

	if (snapshot == NULL) {
		return;
	}

	if (snapshot->current_path[0] != '\0') {
		title = s_basename(snapshot->current_path);
	}

	if (snapshot->track_duration_ms > 0) {
		duration_sec = snapshot->track_duration_ms / 1000U;
	}
	position_sec = snapshot->track_position_ms / 1000U;
	if (position_sec > duration_sec) {
		position_sec = duration_sec;
	}

	if (objects.mp3_scr_musictitle_label != NULL) {
		lv_label_set_text(objects.mp3_scr_musictitle_label, title);
	}

	if (objects.mp3_scr_play_progress != NULL) {
		uint32_t max_sec = duration_sec > 0 ? duration_sec : 1U;
		if (lv_slider_get_min_value(objects.mp3_scr_play_progress) != 0 ||
			lv_slider_get_max_value(objects.mp3_scr_play_progress) != (int32_t)max_sec) {
			lv_slider_set_range(objects.mp3_scr_play_progress, 0, (int32_t)max_sec);
		}
		if (lv_slider_get_value(objects.mp3_scr_play_progress) != (int32_t)position_sec) {
			lv_slider_set_value(objects.mp3_scr_play_progress, (int32_t)position_sec, LV_ANIM_OFF);
		}
	}

	s_format_mmss(position_sec, pos_text, sizeof(pos_text));
	s_format_mmss(duration_sec, dur_text, sizeof(dur_text));
	snprintf(time_text, sizeof(time_text), "%s/%s", pos_text, dur_text);
	if (objects.mp3_scr_current_total_time_label != NULL) {
		lv_label_set_text(objects.mp3_scr_current_total_time_label, time_text);
	}

	if (snapshot->playlist_loaded && snapshot->file_count > 0 &&
		snapshot->current_index >= 0 && snapshot->current_index < (int)snapshot->file_count) {
		snprintf(file_count_text, sizeof(file_count_text), "%d/%lu",
				 snapshot->current_index + 1,
				 (unsigned long)snapshot->file_count);
	} else {
		snprintf(file_count_text, sizeof(file_count_text), "0/0");
	}
	if (objects.mp3_scr_file_count_label != NULL) {
		lv_label_set_text(objects.mp3_scr_file_count_label, file_count_text);
	}

	if (objects.mp3_scr_volume_slider != NULL) {
		if (lv_slider_get_min_value(objects.mp3_scr_volume_slider) != 0 ||
			lv_slider_get_max_value(objects.mp3_scr_volume_slider) != 10) {
			lv_slider_set_range(objects.mp3_scr_volume_slider, 0, 10);
		}

		bool slider_being_dragged = lv_obj_has_state(objects.mp3_scr_volume_slider, LV_STATE_PRESSED) ||
			lv_slider_is_dragged(objects.mp3_scr_volume_slider);
		int32_t target_volume = snapshot->volume_percent / 10;
		if (!slider_being_dragged &&
			lv_slider_get_value(objects.mp3_scr_volume_slider) != target_volume) {
			lv_slider_set_value(objects.mp3_scr_volume_slider, target_volume, LV_ANIM_OFF);
		}
	}

	if (objects.mp3_scr_play_pause_btn != NULL) {
		lv_obj_t *btn_label = lv_obj_get_child(objects.mp3_scr_play_pause_btn, 0);
		if (btn_label != NULL) {
			if (snapshot->playing && !snapshot->paused) {
				lv_label_set_text(btn_label, "");
				lv_obj_set_pos(btn_label, -10, -9);
			} else {
				lv_label_set_text(btn_label, "");
				lv_obj_set_pos(btn_label, -16, -9);
			}
		}
	}
}

static void s_refresh_ui(void)
{
	mp3_ui_snapshot_t snapshot = {0};
	bool dirty = s_take_ui_snapshot(&snapshot);
	bool periodic_refresh = snapshot.playing && !snapshot.paused;
	if (!dirty && !periodic_refresh) {
		return;
	}
	s_update_ui_from_snapshot(&snapshot);
}

static void s_refresh_ui_timer_cb(lv_timer_t *timer)
{
	(void)timer;
	s_refresh_ui();
}

static void s_set_amp_enabled(bool enable)
{
	esp_err_t ret = max98357_set_enabled(&audio_handle, enable);
	if (ret != ESP_OK) {
		ESP_LOGW(TAG, "set amp %s failed: %s", enable ? "on" : "off", esp_err_to_name(ret));
	}
}

static esp_err_t s_load_playlist(void)
{
	esp_err_t ret = sdspi_collect_wav_files(&sd_handle, &s_state.files);
	if (ret != ESP_OK) {
		s_state.playlist_loaded = false;
		s_state.files.count = 0;
		s_state.current_index = 0;
		s_state.playing = false;
		s_state.paused = true;
		s_state.track_duration_ms = 0;
		s_state.track_position_ms = 0;
		return ret;
	}

	s_state.playlist_loaded = true;
	if (s_state.current_index >= (int)s_state.files.count) {
		s_state.current_index = 0;
	}
	return ESP_OK;
}

static void s_cleanup_track(FILE **pf, i2s_chan_handle_t *tx_chan)
{
	if (pf != NULL && *pf != NULL) {
		if (spi_shared_lock_take(portMAX_DELAY)) {
			fclose(*pf);
			spi_shared_lock_give();
		}
		*pf = NULL;
	}

	if (tx_chan != NULL && *tx_chan != NULL) {
		i2s_channel_disable(*tx_chan);
		i2s_del_channel(*tx_chan);
		*tx_chan = NULL;
	}
}

static esp_err_t s_open_current_track(FILE **pf, i2s_chan_handle_t *tx_chan, wav_info_t *wav)
{
	if (!s_state.playlist_loaded || s_state.files.count == 0) {
		return ESP_ERR_NOT_FOUND;
	}

	const char *path = s_state.files.paths[s_state.current_index];

	if (!spi_shared_lock_take(portMAX_DELAY)) {
		return ESP_ERR_TIMEOUT;
	}
	FILE *f = fopen(path, "rb");
	spi_shared_lock_give();
	if (f == NULL) {
		ESP_LOGE(TAG, "Failed to open: %s", path);
		return ESP_FAIL;
	}

	esp_err_t ret = s_parse_wav_header(f, wav);
	if (ret != ESP_OK) {
		fclose(f);
		return ret;
	}

	i2s_slot_mode_t slot_mode = (wav->num_channels == 2) ? I2S_SLOT_MODE_STEREO : I2S_SLOT_MODE_MONO;

	i2s_chan_config_t chan_cfg = I2S_CHANNEL_DEFAULT_CONFIG(audio_handle.config.i2s_port, I2S_ROLE_MASTER);
	ret = i2s_new_channel(&chan_cfg, tx_chan, NULL);
	if (ret != ESP_OK) {
		fclose(f);
		return ret;
	}

	i2s_std_config_t std_cfg = {
		.clk_cfg = I2S_STD_CLK_DEFAULT_CONFIG(wav->sample_rate),
		.slot_cfg = I2S_STD_PHILIPS_SLOT_DEFAULT_CONFIG(I2S_DATA_BIT_WIDTH_16BIT, slot_mode),
		.gpio_cfg = {
			.mclk = I2S_GPIO_UNUSED,
			.bclk = audio_handle.config.pin_bclk,
			.ws = audio_handle.config.pin_ws,
			.dout = audio_handle.config.pin_dout,
			.din = I2S_GPIO_UNUSED,
			.invert_flags = {
				.mclk_inv = false,
				.bclk_inv = false,
				.ws_inv = false,
			},
		},
	};

	ret = i2s_channel_init_std_mode(*tx_chan, &std_cfg);
	if (ret != ESP_OK) {
		s_cleanup_track(NULL, tx_chan);
		fclose(f);
		return ret;
	}

	ret = i2s_channel_enable(*tx_chan);
	if (ret != ESP_OK) {
		s_cleanup_track(NULL, tx_chan);
		fclose(f);
		return ret;
	}

	if (fseek(f, (long)wav->data_offset, SEEK_SET) != 0) {
		s_cleanup_track(NULL, tx_chan);
		fclose(f);
		return ESP_FAIL;
	}

	*pf = f;
	return ESP_OK;
}

static void s_set_next_index(bool forward)
{
	if (!s_state.playlist_loaded || s_state.files.count == 0) {
		s_state.current_index = 0;
		return;
	}

	if (forward) {
		s_state.current_index = (s_state.current_index + 1) % (int)s_state.files.count;
	} else {
		s_state.current_index = (s_state.current_index - 1 + (int)s_state.files.count) % (int)s_state.files.count;
	}
}

static void mp3_screen_update_task(void *arg)
{
	(void)arg;

	FILE *f = NULL;
	i2s_chan_handle_t tx_chan = NULL;
	wav_info_t wav = {0};
	uint8_t *buffer = malloc(MP3_READ_CHUNK_BYTES);
	uint32_t bytes_played = 0;

	if (buffer == NULL) {
		ESP_LOGE(TAG, "No memory for MP3 buffer");
		free(buffer);
		vTaskDelete(NULL);
		return;
	}

	s_load_playlist();
	portENTER_CRITICAL(&s_mp3_lock);
	s_state.paused = true;
	s_state.deepsleep_pause = false;
	portEXIT_CRITICAL(&s_mp3_lock);
	s_set_amp_enabled(false);
	s_mark_ui_dirty();

	while (!s_is_exit_requested()) {
		/* 深度睡眠强制暂停：关功放，等通知 */
		{
			bool need_sleep_pause = false;
			portENTER_CRITICAL(&s_mp3_lock);
			if (s_state.deepsleep_pause) {
				s_state.paused = true;
				s_state.playing = false;
				need_sleep_pause = true;
			}
			portEXIT_CRITICAL(&s_mp3_lock);
			if (need_sleep_pause) {
				s_cleanup_track(&f, &tx_chan);
				s_set_amp_enabled(false);
				s_mark_ui_dirty();
				ulTaskNotifyTake(pdTRUE, portMAX_DELAY);
				continue;
			}
		}

		mp3_cmd_t cmd = MP3_CMD_NONE;
		bool has_cmd = s_get_cmd(&cmd);

		if (has_cmd) {
			if (cmd == MP3_CMD_RELOAD) {
				s_cleanup_track(&f, &tx_chan);
				s_load_playlist();
				portENTER_CRITICAL(&s_mp3_lock);
				s_state.paused = true;
				s_state.playing = false;
				s_state.track_duration_ms = 0;
				s_state.track_position_ms = 0;
				portEXIT_CRITICAL(&s_mp3_lock);
				s_set_amp_enabled(false);
				bytes_played = 0;
				s_mark_ui_dirty();
			} else if (cmd == MP3_CMD_TOGGLE_PAUSE) {
				portENTER_CRITICAL(&s_mp3_lock);
				s_state.paused = !s_state.paused;
				bool now_paused = s_state.paused;
				portEXIT_CRITICAL(&s_mp3_lock);
				s_set_amp_enabled(!now_paused);
				s_mark_ui_dirty();
			} else if (cmd == MP3_CMD_NEXT) {
				s_cleanup_track(&f, &tx_chan);
				s_set_next_index(true);
				portENTER_CRITICAL(&s_mp3_lock);
				s_state.paused = true;
				s_state.playing = false;
				s_state.track_duration_ms = 0;
				s_state.track_position_ms = 0;
				portEXIT_CRITICAL(&s_mp3_lock);
				s_set_amp_enabled(false);
				bytes_played = 0;
				s_mark_ui_dirty();
			} else if (cmd == MP3_CMD_PREV) {
				s_cleanup_track(&f, &tx_chan);
				s_set_next_index(false);
				portENTER_CRITICAL(&s_mp3_lock);
				s_state.paused = true;
				s_state.playing = false;
				s_state.track_duration_ms = 0;
				s_state.track_position_ms = 0;
				portEXIT_CRITICAL(&s_mp3_lock);
				s_set_amp_enabled(false);
				bytes_played = 0;
				s_mark_ui_dirty();
			}
		}

		{
			bool no_playlist;
			portENTER_CRITICAL(&s_mp3_lock);
			no_playlist = (!s_state.playlist_loaded || s_state.files.count == 0);
			if (no_playlist) {
				s_state.playing = false;
				s_state.paused = true;
				s_state.track_duration_ms = 0;
				s_state.track_position_ms = 0;
			}
			portEXIT_CRITICAL(&s_mp3_lock);
			if (no_playlist) {
				s_set_amp_enabled(false);
				s_mark_ui_dirty();
				ulTaskNotifyTake(pdTRUE, portMAX_DELAY);
				continue;
			}
		}

		{
			bool idle_paused;
			portENTER_CRITICAL(&s_mp3_lock);
			idle_paused = (s_state.paused && !s_state.playing);
			portEXIT_CRITICAL(&s_mp3_lock);
			if (idle_paused) {
				ulTaskNotifyTake(pdTRUE, portMAX_DELAY);
				continue;
			}
		}

		{
			bool need_open;
			portENTER_CRITICAL(&s_mp3_lock);
			need_open = (f == NULL || tx_chan == NULL || !s_state.playing);
			portEXIT_CRITICAL(&s_mp3_lock);

			if (need_open) {
				esp_err_t open_ret = s_open_current_track(&f, &tx_chan, &wav);
				if (open_ret != ESP_OK) {
					ESP_LOGW(TAG, "Skip invalid track: %s", esp_err_to_name(open_ret));
					s_set_next_index(true);
					s_mark_ui_dirty();
					ulTaskNotifyTake(pdTRUE, pdMS_TO_TICKS(80));
					continue;
				}

				bytes_played = 0;
				portENTER_CRITICAL(&s_mp3_lock);
				s_state.playing = true;
				s_state.track_position_ms = 0;
				s_state.track_duration_ms = (uint32_t)(((uint64_t)wav.data_size * 1000ULL) / wav.byte_rate);
				portEXIT_CRITICAL(&s_mp3_lock);
				s_mark_ui_dirty();
			}
		}

		{
			bool is_paused;
			portENTER_CRITICAL(&s_mp3_lock);
			is_paused = s_state.paused;
			portEXIT_CRITICAL(&s_mp3_lock);
			if (is_paused) {
				ulTaskNotifyTake(pdTRUE, portMAX_DELAY);
				continue;
			}
		}

		size_t req = (wav.data_size - bytes_played) > MP3_READ_CHUNK_BYTES ? MP3_READ_CHUNK_BYTES : (wav.data_size - bytes_played);
		if (req == 0) {
			s_cleanup_track(&f, &tx_chan);
			s_set_next_index(true);
			portENTER_CRITICAL(&s_mp3_lock);
			s_state.playing = false;
			s_state.track_duration_ms = 0;
			s_state.track_position_ms = 0;
			portEXIT_CRITICAL(&s_mp3_lock);
			s_mark_ui_dirty();
			continue;
		}

		if (!spi_shared_lock_take(5)) {
			ulTaskNotifyTake(pdTRUE, pdMS_TO_TICKS(5));
			continue;
		}
		size_t read_len = fread(buffer, 1, req, f);
		spi_shared_lock_give();

		if (read_len == 0) {
			s_cleanup_track(&f, &tx_chan);
			s_set_next_index(true);
			portENTER_CRITICAL(&s_mp3_lock);
			s_state.playing = false;
			s_state.track_duration_ms = 0;
			s_state.track_position_ms = 0;
			portEXIT_CRITICAL(&s_mp3_lock);
			s_mark_ui_dirty();
			continue;
		}

		if (read_len & 0x1U) {
			read_len--;
		}
		if (read_len == 0) {
			continue;
		}

		uint8_t volume;
		portENTER_CRITICAL(&s_mp3_lock);
		volume = s_state.volume_percent;
		audio_handle.config.volume_percent = volume;
		portEXIT_CRITICAL(&s_mp3_lock);

		s_apply_volume_16bit((int16_t *)buffer, read_len / sizeof(int16_t), volume);

		size_t bytes_written = 0;
		esp_err_t wr = i2s_channel_write(tx_chan, buffer, read_len, &bytes_written, portMAX_DELAY);
		if (wr != ESP_OK) {
			ESP_LOGE(TAG, "i2s write failed: %s", esp_err_to_name(wr));
			s_cleanup_track(&f, &tx_chan);
			portENTER_CRITICAL(&s_mp3_lock);
			s_state.playing = false;
			portEXIT_CRITICAL(&s_mp3_lock);
			s_mark_ui_dirty();
			ulTaskNotifyTake(pdTRUE, pdMS_TO_TICKS(80));
			continue;
		}

		bytes_played += (uint32_t)read_len;
		if (bytes_played > wav.data_size) {
			bytes_played = wav.data_size;
		}

		portENTER_CRITICAL(&s_mp3_lock);
		s_state.track_position_ms = (uint32_t)(((uint64_t)bytes_played * 1000ULL) / wav.byte_rate);
		portEXIT_CRITICAL(&s_mp3_lock);
	}

	s_cleanup_track(&f, &tx_chan);
	free(buffer);
	s_set_amp_enabled(false);
	s_state.playing = false;
	s_mark_ui_dirty();
	portENTER_CRITICAL(&s_mp3_lock);
	s_mp3_task_handle = NULL;
	portEXIT_CRITICAL(&s_mp3_lock);
	vTaskDelete(NULL);
}

void mp3_screen_start_update_task(void)
{
	if (s_mp3_ui_timer == NULL) {
		s_mp3_ui_timer = lv_timer_create(s_refresh_ui_timer_cb, MP3_UI_REFRESH_INTERVAL_MS, NULL);
	}
	if (s_mp3_ui_timer != NULL) {
		lv_timer_resume(s_mp3_ui_timer);
	}
	s_mark_ui_dirty();
	s_refresh_ui();

	if (s_mp3_task_handle != NULL) {
		/* 任务还在（深度睡眠暂停后），通知它恢复 */
		portENTER_CRITICAL(&s_mp3_lock);
		s_state.deepsleep_pause = false;
		portEXIT_CRITICAL(&s_mp3_lock);
		xTaskNotifyGive(s_mp3_task_handle);
		return;
	}

	portENTER_CRITICAL(&s_mp3_lock);
	s_state.exit_requested = false;
	s_state.deepsleep_pause = false;
	s_state.pending_cmd = MP3_CMD_NONE;
	portEXIT_CRITICAL(&s_mp3_lock);

	BaseType_t created = xTaskCreate(mp3_screen_update_task,
									 "mp3_screen_update",
									 3072,
									 NULL,
									 5,
									 &s_mp3_task_handle);
	if (created != pdPASS) {
		ESP_LOGE(TAG, "Failed to create MP3 update task");
		s_mp3_task_handle = NULL;
		return;
	}

	xTaskNotifyGive(s_mp3_task_handle);
}

void mp3_screen_stop_update_task(void)
{
	if (s_mp3_ui_timer != NULL) {
		lv_timer_pause(s_mp3_ui_timer);
	}

	if (s_mp3_task_handle == NULL) {
		return;
	}
}

void mp3_screen_toggle_pause(void)
{
	if (s_mp3_task_handle == NULL) {
		return;
	}
	portENTER_CRITICAL(&s_mp3_lock);
	s_state.pending_cmd = MP3_CMD_TOGGLE_PAUSE;
	portEXIT_CRITICAL(&s_mp3_lock);
	xTaskNotifyGive(s_mp3_task_handle);
}

void mp3_screen_play_next(void)
{
	if (s_mp3_task_handle == NULL) {
		return;
	}
	portENTER_CRITICAL(&s_mp3_lock);
	s_state.pending_cmd = MP3_CMD_NEXT;
	portEXIT_CRITICAL(&s_mp3_lock);
	xTaskNotifyGive(s_mp3_task_handle);
}

void mp3_screen_play_prev(void)
{
	if (s_mp3_task_handle == NULL) {
		return;
	}
	portENTER_CRITICAL(&s_mp3_lock);
	s_state.pending_cmd = MP3_CMD_PREV;
	portEXIT_CRITICAL(&s_mp3_lock);
	xTaskNotifyGive(s_mp3_task_handle);
}

void mp3_screen_set_volume_from_slider(lv_obj_t *slider)
{
	if (slider == NULL) {
		return;
	}

	int raw = lv_slider_get_value(slider);
	int slider_value = s_clamp_slider_volume(raw);
	if (raw != slider_value) {
		lv_slider_set_value(slider, slider_value, LV_ANIM_OFF);
	}

	portENTER_CRITICAL(&s_mp3_lock);
	s_state.volume_percent = (uint8_t)(slider_value * 10);
	audio_handle.config.volume_percent = (uint8_t)(slider_value * 10);
	portEXIT_CRITICAL(&s_mp3_lock);

	if (s_mp3_task_handle != NULL) {
		xTaskNotifyGive(s_mp3_task_handle);
	}
}

void mp3_screen_deepsleep_pause(void)
{
	if (s_mp3_task_handle == NULL) {
		return;
	}
	portENTER_CRITICAL(&s_mp3_lock);
	s_state.deepsleep_pause = true;
	s_state.pending_cmd = MP3_CMD_NONE;
	portEXIT_CRITICAL(&s_mp3_lock);
	xTaskNotifyGive(s_mp3_task_handle);
}
