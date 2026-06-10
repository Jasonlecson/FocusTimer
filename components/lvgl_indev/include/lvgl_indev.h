#pragma once

#include "lvgl.h"

typedef void (*lvgl_indev_long_press_cb_t)(void);
typedef void (*lvgl_indev_lr_action_cb_t)(void);

void lvgl_indev_init();
void lvgl_indev_invalidate_screen(lv_obj_t *screen);
void lvgl_indev_register_long_press_cb(lvgl_indev_long_press_cb_t cb);
/**
 * @brief 注册左右键直接动作屏幕
 *
 * 注册后，当该屏幕处于活动状态时，左右键不再控制焦点导航，
 * 而是直接调用 left_cb / right_cb。
 * 传 NULL 可取消注册。
 */
void lvgl_indev_set_lr_action_screen(lv_obj_t *screen,
                                     lvgl_indev_lr_action_cb_t left_cb,
                                     lvgl_indev_lr_action_cb_t right_cb);
void aw_touch_key_event_cb(uint8_t key_index, bool pressed, void *user_ctx);