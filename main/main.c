#include <stdio.h>
#include <sys/lock.h>
#include <math.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"
#include "esp_sleep.h"
#include "driver/gpio.h"

#include "lvgl.h"
#include "ui.h"
#include "screens.h"

#include "spi_shared_lock.h"
#include "lvgl_user.h"
#include "sys_init.h"
#include "aw96103.h"
#include "lvgl_indev.h"
#include "stcc4.h"
#include "pcf85263a.h"
#include "imu.h"
#include "aw32001.h"
#include "battery.h"
#include "message_screen_calls.h"
#include "main_screen_calls.h"
#include "nvs_storage.h"
#include "nvs.h"
#include "nvs_flash.h"
#include "power_management.h"
#include "st7305_2p9.h"
#include "ble.h"
#include "pinmap.h"

#define TAG "main"
#define POWER_MGMT_NVS_NAMESPACE "power_mgr"
#define NVS_KEY_SLEEP_START_HOUR "pm_sleep_sh"
#define NVS_KEY_SLEEP_START_MINUTE "pm_sleep_sm"
#define NVS_KEY_SLEEP_END_HOUR "pm_sleep_eh"
#define NVS_KEY_SLEEP_END_MINUTE "pm_sleep_em"
#define DEFAULT_SLEEP_START_HOUR 22
#define DEFAULT_SLEEP_START_MINUTE 0
#define DEFAULT_SLEEP_END_HOUR 6
#define DEFAULT_SLEEP_END_MINUTE 0
#define SECONDS_PER_DAY (24U * 60U * 60U)

static void sync_daily_record_on_midnight_wakeup(void);
typedef struct
{
    uint8_t start_hour;
    uint8_t start_minute;
    uint8_t end_hour;
    uint8_t end_minute;
} power_sleep_period_t;

static uint8_t nvs_read_u8_default(const char *key, uint8_t default_val)
{
    nvs_handle_t handle;
    uint8_t value = default_val;

    if (nvs_open(POWER_MGMT_NVS_NAMESPACE, NVS_READONLY, &handle) == ESP_OK)
    {
        if (nvs_get_u8(handle, key, &value) != ESP_OK)
        {
            value = default_val;
        }
        nvs_close(handle);
    }

    return value;
}

static void load_power_sleep_period(power_sleep_period_t *period)
{
    if (period == NULL)
    {
        return;
    }

    period->start_hour = nvs_read_u8_default(NVS_KEY_SLEEP_START_HOUR, DEFAULT_SLEEP_START_HOUR);
    period->start_minute = nvs_read_u8_default(NVS_KEY_SLEEP_START_MINUTE, DEFAULT_SLEEP_START_MINUTE);
    period->end_hour = nvs_read_u8_default(NVS_KEY_SLEEP_END_HOUR, DEFAULT_SLEEP_END_HOUR);
    period->end_minute = nvs_read_u8_default(NVS_KEY_SLEEP_END_MINUTE, DEFAULT_SLEEP_END_MINUTE);

    if (period->start_hour > 23)
    {
        period->start_hour = 0;
    }
    if (period->start_minute > 59)
    {
        period->start_minute = 0;
    }
    if (period->end_hour > 23)
    {
        period->end_hour = 0;
    }
    if (period->end_minute > 59)
    {
        period->end_minute = 0;
    }
}

static bool get_sleep_period_remaining_ms(const power_sleep_period_t *period,
                                          const pcf85263a_datetime_t *datetime,
                                          uint32_t *out_remaining_ms)
{
    if (period == NULL || datetime == NULL || out_remaining_ms == NULL)
    {
        return false;
    }

    uint32_t start_seconds = ((uint32_t)period->start_hour * 60U + (uint32_t)period->start_minute) * 60U;
    uint32_t end_seconds = ((uint32_t)period->end_hour * 60U + (uint32_t)period->end_minute) * 60U;
    uint32_t now_seconds = ((uint32_t)datetime->hour * 60U + (uint32_t)datetime->minute) * 60U + (uint32_t)datetime->second;
    uint32_t remaining_seconds = 0;

    if (start_seconds == end_seconds)
    {
        return false;
    }

    if (start_seconds < end_seconds)
    {
        if (now_seconds < start_seconds || now_seconds >= end_seconds)
        {
            return false;
        }
        remaining_seconds = end_seconds - now_seconds;
    }
    else
    {
        if (now_seconds >= start_seconds)
        {
            remaining_seconds = (SECONDS_PER_DAY - now_seconds) + end_seconds;
        }
        else if (now_seconds < end_seconds)
        {
            remaining_seconds = end_seconds - now_seconds;
        }
        else
        {
            return false;
        }
    }

    if (remaining_seconds == 0)
    {
        return false;
    }

    *out_remaining_ms = remaining_seconds * 1000U;
    return true;
}

static bool maybe_enter_configured_sleep_period(void)
{
    power_sleep_period_t period = {0};
    pcf85263a_datetime_t datetime = {0};
    pcf85263a_handle_t rtc_handle = pcf85263a_get_handle();
    uint32_t sleep_ms = 0;

    if (rtc_handle == NULL)
    {
        ESP_LOGW(TAG, "rtc handle unavailable when checking sleep period");
        return false;
    }

    load_power_sleep_period(&period);

    esp_err_t err = pcf85263a_get_datetime(rtc_handle, &datetime);
    if (err != ESP_OK)
    {
        ESP_LOGW(TAG, "read rtc datetime for sleep period failed: %s", esp_err_to_name(err));
        return false;
    }

    if (!get_sleep_period_remaining_ms(&period, &datetime, &sleep_ms))
    {
        return false;
    }

    err = nvs_storage_save_daily_record();
    if (err != ESP_OK)
    {
        ESP_LOGE(TAG, "save daily record before configured sleep failed: %s", esp_err_to_name(err));
    }

    ESP_LOGI(TAG,
             "in configured sleep period %02u:%02u-%02u:%02u, now=%02u:%02u:%02u, deep sleep %lu ms",
             period.start_hour,
             period.start_minute,
             period.end_hour,
             period.end_minute,
             datetime.hour,
             datetime.minute,
             datetime.second,
             (unsigned long)sleep_ms);

    spi_shared_lock_init();
    ESP_ERROR_CHECK_WITHOUT_ABORT(spi_bus_init());
    ESP_ERROR_CHECK_WITHOUT_ABORT(lcd_screen_init());
    ESP_ERROR_CHECK_WITHOUT_ABORT(esp_lcd_panel_disp_on_off(panel_handle, false));
    sync_daily_record_on_midnight_wakeup();
    power_management_enter_deepsleep(sleep_ms);
    return true;
}

static esp_err_t storage_init_nvs_flash(void)
{
    esp_err_t err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        ESP_ERROR_CHECK_WITHOUT_ABORT(nvs_flash_erase());
        err = nvs_flash_init();
    }
    return err;
}

static void shipping_mode_cb(void *user_data)
{
    esp_err_t err = nvs_storage_save_daily_record();
    if (err != ESP_OK)
    {
        ESP_LOGE(TAG, "save daily record before shipping mode failed: %s", esp_err_to_name(err));
    }

    _lock_acquire(&lvgl_api_lock);
    message_screen_show_with_text("", "关机中...\n如果正在充电,拔下电源后才会关机", "OK");
    _lock_release(&lvgl_api_lock);
}

static void pre_deepsleep_cb(void *user_data)
{
    (void)user_data;

    (void)ble_set_advertising_enabled(false);

    esp_err_t err = aw96103_enter_doze_mode();
    if (err != ESP_OK)
    {
        ESP_LOGW(TAG, "set aw96103 doze mode before deep sleep failed: %s", esp_err_to_name(err));
    }
    esp_lcd_panel_st7305_set_power_mode(panel_handle, ST7305_PWR_MODE_LPM);

    (void)imu_prepare_for_deepsleep();
}

static void ble_datetime_updated_cb(void *user_data)
{
    (void)user_data;
    update_main_screen_date_labels(true);
}

static void sync_daily_record_on_midnight_wakeup(void)
{
    bool is_midnight = false;
    esp_err_t err = nvs_storage_is_midnight(&is_midnight);
    if (err != ESP_OK)
    {
        ESP_LOGW(TAG, "midnight check failed: %s", esp_err_to_name(err));
        return;
    }

    if (!is_midnight)
    {
        return;
    }

    err = nvs_storage_sync_current_day();
    if (err != ESP_OK)
    {
        ESP_LOGE(TAG, "midnight rollover sync failed: %s", esp_err_to_name(err));
        return;
    }

    ESP_LOGI(TAG, "midnight wakeup detected, synced previous day record");
}

static void init_minimal_display_stack(void)
{
    spi_shared_lock_init();
    ESP_ERROR_CHECK_WITHOUT_ABORT(spi_bus_init());
    ESP_ERROR_CHECK_WITHOUT_ABORT(lcd_screen_init());
    lvgl_user_init(panel_handle, io_handle);

    _lock_acquire(&lvgl_api_lock);
    create_screens();
    lv_scr_load(objects.main);
    _lock_release(&lvgl_api_lock);

    ESP_ERROR_CHECK(esp_lcd_panel_disp_on_off(panel_handle, true));
}

static void handle_timer_wakeup(void)
{
    ESP_ERROR_CHECK_WITHOUT_ABORT(i2c_init());
    ESP_ERROR_CHECK_WITHOUT_ABORT(pcf85263a_init(I2C_NUM_0));
    ESP_ERROR_CHECK_WITHOUT_ABORT(nvs_storage_init());
    ESP_ERROR_CHECK_WITHOUT_ABORT(stcc4_i2c_init(I2C_NUM_0));
    ESP_ERROR_CHECK_WITHOUT_ABORT(aw32001_init(I2C_NUM_0));
    ESP_ERROR_CHECK_WITHOUT_ABORT(battery_init());
    ESP_ERROR_CHECK_WITHOUT_ABORT(battery_refresh_once());

    if (maybe_enter_configured_sleep_period())
    {
        return;
    }

    init_minimal_display_stack();

    esp_lcd_panel_st7305_set_power_mode(panel_handle, ST7305_PWR_MODE_HPM);
    (void)main_screen_refresh_once(1200);

    _lock_acquire(&lvgl_api_lock);
    if (lvgl_display != NULL)
    {
        lv_refr_now(lvgl_display);
    }
    _lock_release(&lvgl_api_lock);
    vTaskDelay(pdMS_TO_TICKS(120));

    esp_lcd_panel_st7305_set_power_mode(panel_handle, ST7305_PWR_MODE_LPM);
    power_management_enter_deepsleep(58000);
}

void app_main(void)
{
    esp_sleep_wakeup_cause_t wake_cause = esp_sleep_get_wakeup_cause();
    ESP_LOGI(TAG, "boot, wakeup cause=%d", (int)wake_cause);

    ESP_ERROR_CHECK_WITHOUT_ABORT(storage_init_nvs_flash());
    bool wakeup_from_timer = power_management_is_wakeup_from_timer();
    bool wakeup_by_touch = power_management_is_wakeup_by_touch();
    
    if (wakeup_from_timer)
    {
        handle_timer_wakeup();
        return;
    }

    ESP_ERROR_CHECK_WITHOUT_ABORT(i2c_init());
    ESP_ERROR_CHECK_WITHOUT_ABORT(pcf85263a_init(I2C_NUM_0));
    ESP_ERROR_CHECK_WITHOUT_ABORT(nvs_storage_init());
    sync_daily_record_on_midnight_wakeup();
    ESP_ERROR_CHECK_WITHOUT_ABORT(aw96103_init());
    ESP_ERROR_CHECK_WITHOUT_ABORT(stcc4_i2c_init(I2C_NUM_0));
    ESP_ERROR_CHECK_WITHOUT_ABORT(imu_init(I2C_NUM_0));
    ESP_ERROR_CHECK_WITHOUT_ABORT(aw32001_init(I2C_NUM_0));
    aw96103_register_key_event_cb(aw_touch_key_event_cb, NULL);
    ESP_ERROR_CHECK_WITHOUT_ABORT(battery_init());
    (void)power_management_register_pre_deepsleep_cb(pre_deepsleep_cb, NULL);
    spi_shared_lock_init();
    ESP_ERROR_CHECK_WITHOUT_ABORT(spi_bus_init());
    ESP_ERROR_CHECK_WITHOUT_ABORT(sdcard_init(&sd_handle));
    ESP_ERROR_CHECK_WITHOUT_ABORT(audio_init(&audio_handle));

    ESP_ERROR_CHECK_WITHOUT_ABORT(lcd_screen_init());
    lvgl_user_init(panel_handle, io_handle);
    power_management_register_panel(panel_handle);
    ESP_ERROR_CHECK_WITHOUT_ABORT(power_management_init());
    _lock_acquire(&lvgl_api_lock);
    create_screens();
    lv_scr_load(objects.main);
    lvgl_indev_init();
    _lock_release(&lvgl_api_lock);
    ble_register_datetime_updated_cb(ble_datetime_updated_cb, NULL);
    ESP_ERROR_CHECK(esp_lcd_panel_disp_on_off(panel_handle, true));

    /* 如果是触摸唤醒，通常意味着用户要操作。
       由于 ext1 是电平唤醒，触摸那一下不一定会再产生一次下降沿中断，
       因此这里主动恢复屏幕到 HPM，避免“已唤醒但界面不刷新/无法操作”的假死观感。 */
    if (wakeup_by_touch)
    {
        power_management_notify_user_activity();
    }

    if (!wakeup_from_timer && !wakeup_by_touch)
    {
        esp_lcd_panel_st7305_set_power_mode(panel_handle, ST7305_PWR_MODE_HPM);
        /* 正常启动：显示启动画面 */
        _lock_acquire(&lvgl_api_lock);
        lv_scr_load_anim(objects.start, LV_SCR_LOAD_ANIM_NONE, 0, 0, false);
        _lock_release(&lvgl_api_lock);
        vTaskDelay(pdTICKS_TO_MS(1000));
        _lock_acquire(&lvgl_api_lock);
        lv_scr_load_anim(objects.main, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 300, 0, true);
        _lock_release(&lvgl_api_lock);
    }

    imu_start_flip_detection_task();

    // 注册shipping mode回调并启动电源按键检测
    aw32001_register_shipping_mode_cb(shipping_mode_cb, NULL);
    aw32001_power_key_init();
    vTaskDelay(pdMS_TO_TICKS(50));
    ESP_ERROR_CHECK(esp_lcd_panel_disp_on_off(panel_handle, true));
}