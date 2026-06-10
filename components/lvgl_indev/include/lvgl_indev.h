#pragma once

#include "lvgl.h"

typedef void (*lvgl_indev_long_press_cb_t)(void);

void lvgl_indev_init();
void lvgl_indev_invalidate_screen(lv_obj_t *screen);
void lvgl_indev_register_long_press_cb(lvgl_indev_long_press_cb_t cb);
void aw_touch_key_event_cb(uint8_t key_index, bool pressed, void *user_ctx);