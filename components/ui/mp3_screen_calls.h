#pragma once

#include <lvgl.h>

void mp3_screen_start_update_task(void);
void mp3_screen_stop_update_task(void);
void mp3_screen_toggle_pause(void);
void mp3_screen_play_next(void);
void mp3_screen_play_prev(void);
void mp3_screen_set_volume_from_slider(lv_obj_t *slider);
/** @brief 深度睡眠前调用：强制暂停播放并关闭功放 */
void mp3_screen_deepsleep_pause(void);
