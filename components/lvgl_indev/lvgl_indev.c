#include <stdio.h>
#include <unistd.h>
#include <sys/lock.h>
#include <stdint.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_timer.h"
#include "lvgl.h"
#include "lvgl_user.h"
#include "power_management.h"

#define TAG "lvgl_indev"
#define TOUCH_KEY_COUNT 3U
#define TOUCH_KEY_LEFT_INDEX 0U
#define TOUCH_KEY_SELECT_INDEX 1U
#define TOUCH_KEY_RIGHT_INDEX 2U
#define TOUCH_KEY_INITIAL_REPEAT_DELAY_MS 400U
#define TOUCH_KEY_REPEAT_INTERVAL_MS 150U
#define TOUCH_KEY_REPEAT_MAX_PENDING_CLICKS 2U

static portMUX_TYPE s_enc_lock = portMUX_INITIALIZER_UNLOCKED;
static int16_t encoder_diff = 0;
static lv_indev_state_t encoder_state = LV_INDEV_STATE_RELEASED;
static bool s_touch_key_repeat_active[TOUCH_KEY_COUNT] = {false};
static bool s_center_key_pulse_pressed = false;
static uint8_t s_center_key_pending_clicks = 0;
static int64_t s_touch_key_next_repeat_us[TOUCH_KEY_COUNT] = {0};
#define MAX_PAGES 10
#define MAX_ITEMS_PER_PAGE 30

typedef struct
{
    lv_obj_t *screen;
    lv_obj_t *items[MAX_ITEMS_PER_PAGE];
    uint32_t item_count;
    int32_t current_index;
} page_focus_t;

static page_focus_t s_page_focus_list[MAX_PAGES]; // 静态数组保存所有界面的组件
static uint32_t s_page_count = 0;

static lv_group_t *g_encoder_group = NULL;
static lv_obj_t *g_current_screen = NULL;

static int16_t touch_key_encoder_step(uint8_t key_index)
{
    lv_disp_rotation_t rotation = lvgl_user_get_rotation();

    if (rotation == LV_DISPLAY_ROTATION_270)
    {
        if (key_index == TOUCH_KEY_LEFT_INDEX)
        {
            return 1;
        }
        if (key_index == TOUCH_KEY_RIGHT_INDEX)
        {
            return -1;
        }
    }
    else
    {
        if (key_index == TOUCH_KEY_LEFT_INDEX)
        {
            return -1;
        }
        if (key_index == TOUCH_KEY_RIGHT_INDEX)
        {
            return 1;
        }
    }

    return 0;
}

static void queue_center_key_click_locked(void)
{
    if (s_center_key_pending_clicks < TOUCH_KEY_REPEAT_MAX_PENDING_CLICKS)
    {
        s_center_key_pending_clicks++;
    }
}

static void trigger_touch_key_locked(uint8_t key_index)
{
    if (key_index == TOUCH_KEY_SELECT_INDEX)
    {
        queue_center_key_click_locked();
        return;
    }

    encoder_diff += touch_key_encoder_step(key_index);
}

// 查找页面是否已经在静态数组中
static int find_page_index(lv_obj_t *screen)
{
    for (uint32_t i = 0; i < s_page_count; i++)
    {
        if (s_page_focus_list[i].screen == screen)
            return i;
    }
    return -1;
}

// 递归扫描并将可以聚焦的控件永久保存到对应页面的静态数组中
static void scan_and_save_focusables(lv_obj_t *parent, page_focus_t *page)
{
    if (parent == NULL)
        return;
    uint32_t child_cnt = lv_obj_get_child_count(parent);
    for (uint32_t i = 0; i < child_cnt; i++)
    {
        lv_obj_t *child = lv_obj_get_child(parent, i);

        // 获取控件的类，排除 label 和 image 等通常不需要获取焦点的静态组件
        const lv_obj_class_t *clz = lv_obj_get_class(child);
        if (clz != &lv_label_class && clz != &lv_image_class)
        {
            // 如果对象是可点击的，或者是输入框、列表等类型的交互组件
            if (lv_obj_has_flag(child, LV_OBJ_FLAG_CLICKABLE) ||
                lv_obj_has_flag(child, LV_OBJ_FLAG_SCROLLABLE))
            {
                if (page->item_count < MAX_ITEMS_PER_PAGE)
                {
                    page->items[page->item_count++] = child; // 存入静态数组
                }
            }
        }
        // 递归查找嵌套的子对象
        scan_and_save_focusables(child, page);
    }
}

static void remove_page_at(uint32_t idx)
{
    if (idx >= s_page_count)
        return;
    // 将后续条目前移填补空位
    for (uint32_t i = idx; i < s_page_count - 1; i++)
    {
        s_page_focus_list[i] = s_page_focus_list[i + 1];
    }
    s_page_count--;
    // 清空最后一个（已前移的冗余副本）
    memset(&s_page_focus_list[s_page_count], 0, sizeof(page_focus_t));
}

// 当屏幕被删除时调用，清除静态数组中该屏幕的缓存，避免悬空指针
void lvgl_indev_invalidate_screen(lv_obj_t *screen)
{
    if (screen == NULL)
        return;

    // 如果当前跟踪的屏幕就是被删除的，清除跟踪
    if (g_current_screen == screen)
        g_current_screen = NULL;

    // 从静态数组中移除该屏幕的条目
    int idx = find_page_index(screen);
    if (idx >= 0)
    {
        // 先将该页面中的控件从 group 中移除
        for (uint32_t i = 0; i < s_page_focus_list[idx].item_count; i++)
        {
            lv_obj_t *item = s_page_focus_list[idx].items[i];
            if (item != NULL && lv_obj_is_valid(item))
            {
                lv_group_remove_obj(item);
            }
        }
        remove_page_at(idx);
    }
}

// 定时器回调：用于监测当前页面切换
static void screen_tracker_timer_cb(lv_timer_t *timer)
{
    lv_obj_t *active_screen = lv_screen_active();

    // 安全检查：如果 g_current_screen 指向已被删除的屏幕，清除它
    if (g_current_screen != NULL && !lv_obj_is_valid(g_current_screen))
    {
        g_current_screen = NULL;
    }

    // 如果发现活动页面发生变化（即切换了页面）
    if (active_screen != g_current_screen)
    {
        // 1. 切换前，保存上一个旧页面当前的焦点选择下标
        if (g_current_screen != NULL)
        {
            int old_idx = find_page_index(g_current_screen);
            if (old_idx >= 0)
            {
                lv_obj_t *focused = lv_group_get_focused(g_encoder_group);
                for (uint32_t i = 0; i < s_page_focus_list[old_idx].item_count; i++)
                {
                    if (s_page_focus_list[old_idx].items[i] == focused)
                    {
                        s_page_focus_list[old_idx].current_index = i;
                        break;
                    }
                }
            }
        }

        g_current_screen = active_screen;

        // 2. 查找新页面是否已缓存
        int new_idx = find_page_index(active_screen);
        if (new_idx < 0)
        {
            // 第一次进入该页面，扫描提取并永久保存到静态数组
            if (s_page_count < MAX_PAGES)
            {
                new_idx = s_page_count++;
                s_page_focus_list[new_idx].screen = active_screen;
                s_page_focus_list[new_idx].item_count = 0;
                s_page_focus_list[new_idx].current_index = 0; // 默认下标0
                scan_and_save_focusables(active_screen, &s_page_focus_list[new_idx]);
            }
        }

        // 3. 从静态数组读取所有组件并应用
        if (new_idx >= 0)
        {
            lv_group_remove_all_objs(g_encoder_group); // 清空组
            for (uint32_t i = 0; i < s_page_focus_list[new_idx].item_count; i++)
            {
                lv_group_add_obj(g_encoder_group, s_page_focus_list[new_idx].items[i]);
            }

            // 4. 重置回到该页面记录的历史焦点下标
            if (s_page_focus_list[new_idx].item_count > 0)
            {
                uint32_t idx_to_focus = s_page_focus_list[new_idx].current_index;
                if (idx_to_focus >= s_page_focus_list[new_idx].item_count)
                    idx_to_focus = 0;
                lv_group_focus_obj(s_page_focus_list[new_idx].items[idx_to_focus]);
            }
        }
    }
}

static void encoder_read(lv_indev_t *indev, lv_indev_data_t *data)
{
    (void)indev;
    taskENTER_CRITICAL(&s_enc_lock);

    int64_t now_us = esp_timer_get_time();
    for (uint8_t key_index = 0; key_index < TOUCH_KEY_COUNT; key_index++)
    {
        if (s_touch_key_repeat_active[key_index] && now_us >= s_touch_key_next_repeat_us[key_index])
        {
            trigger_touch_key_locked(key_index);
            s_touch_key_next_repeat_us[key_index] = now_us + ((int64_t)TOUCH_KEY_REPEAT_INTERVAL_MS * 1000);
        }
    }

    data->enc_diff = encoder_diff;
    encoder_diff = 0;

    if (s_center_key_pulse_pressed)
    {
        data->state = LV_INDEV_STATE_RELEASED;
        encoder_state = LV_INDEV_STATE_RELEASED;
        s_center_key_pulse_pressed = false;
        if (s_center_key_pending_clicks > 0)
        {
            s_center_key_pending_clicks--;
        }
    }
    else if (s_center_key_pending_clicks > 0)
    {
        data->state = LV_INDEV_STATE_PRESSED;
        encoder_state = LV_INDEV_STATE_PRESSED;
        s_center_key_pulse_pressed = true;
    }
    else
    {
        data->state = LV_INDEV_STATE_RELEASED;
        encoder_state = LV_INDEV_STATE_RELEASED;
    }

    taskEXIT_CRITICAL(&s_enc_lock);
}

void aw_touch_key_event_cb(uint8_t key_index, bool pressed, void *user_ctx)
{
    (void)user_ctx;
    /* 用户有按键操作时，先恢复屏幕到 HPM 并重置空闲计时 */
    if (pressed)
    {
        power_management_notify_user_activity();
    }
    taskENTER_CRITICAL(&s_enc_lock);
    if (!pressed)
    {
        if (key_index < TOUCH_KEY_COUNT)
        {
            s_touch_key_repeat_active[key_index] = false;
            s_touch_key_next_repeat_us[key_index] = 0;
            if (key_index == TOUCH_KEY_SELECT_INDEX && s_center_key_pending_clicks > 1)
            {
                s_center_key_pending_clicks = 1;
            }
        }
        taskEXIT_CRITICAL(&s_enc_lock);
        return;
    }

    if (key_index < TOUCH_KEY_COUNT && !s_touch_key_repeat_active[key_index])
    {
        trigger_touch_key_locked(key_index);
        if (key_index != TOUCH_KEY_SELECT_INDEX)
        {
            s_touch_key_repeat_active[key_index] = true;
            s_touch_key_next_repeat_us[key_index] = esp_timer_get_time() + ((int64_t)TOUCH_KEY_INITIAL_REPEAT_DELAY_MS * 1000);
        }
    }
    taskEXIT_CRITICAL(&s_enc_lock);
}

void lvgl_indev_init()
{
    // 取消默认组分配，改用动态页面扫描方式分配组内控件
    g_encoder_group = lv_group_create();

    // 刚初始化时故意置空当前页面，让定时器在第一时间自动扫描初次页面并保存到静态数组中
    g_current_screen = NULL;
    // 创建后台检测定时器，检测页面切换以替换组控件 (每100ms扫描一次)
    lv_timer_create(screen_tracker_timer_cb, 100, NULL);

    // 将按键变为编码器，作为LVGL输入设备
    lv_indev_t *indev = lv_indev_create();
    lv_indev_set_type(indev, LV_INDEV_TYPE_ENCODER);
    lv_indev_set_display(indev, lv_obj_get_display(lv_screen_active()));
    lv_indev_set_read_cb(indev, encoder_read);
    lv_indev_set_group(indev, g_encoder_group); // 将编码器输入设备与组关联
}