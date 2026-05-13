#include "power_setting_screen_calls.h"
#include "ui.h"
#include "screens.h"
#include "power_management.h"

#include <stdio.h>
#include <stdint.h>
#include "esp_log.h"
#include "nvs_flash.h"
#include "nvs.h"

#define TAG "pwr_setting_scr"

/* NVS 键名 — 与 power_management 组件保持一致 */
#define NVS_NAMESPACE      "power_mgr"
#define NVS_KEY_AUTO_LPM   "pm_auto_lpm"
#define NVS_KEY_AUTO_SLEEP "pm_auto_sleep"
#define NVS_KEY_CHG_THR    "pm_chg_thr"
#define NVS_KEY_SLEEP_START_HOUR   "pm_sleep_sh"
#define NVS_KEY_SLEEP_START_MINUTE "pm_sleep_sm"
#define NVS_KEY_SLEEP_END_HOUR     "pm_sleep_eh"
#define NVS_KEY_SLEEP_END_MINUTE   "pm_sleep_em"

enum
{
    POWER_SETTING_TIME_FIELD_START_HOUR = 0,
    POWER_SETTING_TIME_FIELD_START_MINUTE = 1,
    POWER_SETTING_TIME_FIELD_END_HOUR = 2,
    POWER_SETTING_TIME_FIELD_END_MINUTE = 3,
    POWER_SETTING_TIME_FIELD_COUNT,
};

static int8_t s_power_setting_active_field = -1;
static bool s_power_setting_editing = false;

static lv_obj_t *power_setting_get_time_btn(uint8_t field)
{
    switch (field) {
    case POWER_SETTING_TIME_FIELD_START_HOUR:
        return objects.power_setting_scr_start_hour_btn;
    case POWER_SETTING_TIME_FIELD_START_MINUTE:
        return objects.power_setting_scr_start_minute_btn;
    case POWER_SETTING_TIME_FIELD_END_HOUR:
        return objects.power_setting_scr_end_hour_btn;
    case POWER_SETTING_TIME_FIELD_END_MINUTE:
        return objects.power_setting_scr_end_minute_btn;
    default:
        return NULL;
    }
}

static lv_obj_t *power_setting_get_time_value_label(uint8_t field)
{
    lv_obj_t *btn = power_setting_get_time_btn(field);
    if (btn == NULL) {
        return NULL;
    }
    return lv_obj_get_child(btn, 0);
}

static int32_t power_setting_wrap(int32_t value, int32_t min, int32_t max)
{
    if (value < min) {
        return max;
    }
    if (value > max) {
        return min;
    }
    return value;
}

static int32_t power_setting_get_time_value(uint8_t field)
{
    lv_obj_t *label = power_setting_get_time_value_label(field);
    if (label == NULL) {
        return 0;
    }

    const char *text = lv_label_get_text(label);
    if (text == NULL) {
        return 0;
    }

    char *end_ptr = NULL;
    long val = strtol(text, &end_ptr, 10);
    if (end_ptr == text) {
        return 0;
    }

    return (int32_t)val;
}

static void power_setting_set_time_value(uint8_t field, int32_t value)
{
    lv_obj_t *label = power_setting_get_time_value_label(field);
    if (label == NULL) {
        return;
    }

    switch (field) {
    case POWER_SETTING_TIME_FIELD_START_HOUR:
    case POWER_SETTING_TIME_FIELD_END_HOUR:
        value = power_setting_wrap(value, 0, 23);
        break;
    case POWER_SETTING_TIME_FIELD_START_MINUTE:
    case POWER_SETTING_TIME_FIELD_END_MINUTE:
        value = power_setting_wrap(value, 0, 59);
        break;
    default:
        return;
    }

    lv_label_set_text_fmt(label, "%02ld", (long)value);
}

static void power_setting_set_time_editing_state(uint8_t field, bool editing)
{
    lv_obj_t *btn = power_setting_get_time_btn(field);
    if (btn == NULL) {
        return;
    }

    if (editing) {
        lv_obj_add_state(btn, LV_STATE_CHECKED);
    } else {
        lv_obj_remove_state(btn, LV_STATE_CHECKED);
    }
}

/* ---- NVS 读取辅助 ---- */

static bool nvs_read_bool_default(const char *key, bool default_val)
{
    nvs_handle_t h;
    uint8_t val = default_val ? 1 : 0;
    if (nvs_open(NVS_NAMESPACE, NVS_READONLY, &h) == ESP_OK) {
        if (nvs_get_u8(h, key, &val) != ESP_OK) {
            val = default_val ? 1 : 0;
        }
        nvs_close(h);
    }
    return val != 0;
}

static uint8_t nvs_read_u8_default(const char *key, uint8_t default_val)
{
    nvs_handle_t h;
    uint8_t val = default_val;
    if (nvs_open(NVS_NAMESPACE, NVS_READONLY, &h) == ESP_OK) {
        if (nvs_get_u8(h, key, &val) != ESP_OK) {
            val = default_val;
        }
        nvs_close(h);
    }
    return val;
}

static uint8_t power_setting_clamp_time_value(uint8_t field, uint8_t value)
{
    switch (field) {
    case POWER_SETTING_TIME_FIELD_START_HOUR:
    case POWER_SETTING_TIME_FIELD_END_HOUR:
        return value <= 23 ? value : 0;
    case POWER_SETTING_TIME_FIELD_START_MINUTE:
    case POWER_SETTING_TIME_FIELD_END_MINUTE:
        return value <= 59 ? value : 0;
    default:
        return 0;
    }
}

/* ---- 屏幕 load / unload ---- */

static void on_screen_load_start(void)
{
    bool auto_lpm   = nvs_read_bool_default(NVS_KEY_AUTO_LPM, false);
    bool auto_sleep = nvs_read_bool_default(NVS_KEY_AUTO_SLEEP, false);
    uint8_t chg_thr = nvs_read_u8_default(NVS_KEY_CHG_THR, 90);
    uint8_t start_hour = power_setting_clamp_time_value(POWER_SETTING_TIME_FIELD_START_HOUR,
                                                        nvs_read_u8_default(NVS_KEY_SLEEP_START_HOUR, 22));
    uint8_t start_minute = power_setting_clamp_time_value(POWER_SETTING_TIME_FIELD_START_MINUTE,
                                                          nvs_read_u8_default(NVS_KEY_SLEEP_START_MINUTE, 0));
    uint8_t end_hour = power_setting_clamp_time_value(POWER_SETTING_TIME_FIELD_END_HOUR,
                                                      nvs_read_u8_default(NVS_KEY_SLEEP_END_HOUR, 6));
    uint8_t end_minute = power_setting_clamp_time_value(POWER_SETTING_TIME_FIELD_END_MINUTE,
                                                        nvs_read_u8_default(NVS_KEY_SLEEP_END_MINUTE, 0));

    ESP_LOGI(TAG,
             "load: auto_lpm=%d, auto_sleep=%d, chg_thr=%d%%, sleep_period=%02u:%02u-%02u:%02u",
             auto_lpm,
             auto_sleep,
             chg_thr,
             start_hour,
             start_minute,
             end_hour,
             end_minute);

    /* 设置 checkbox 状态 */
    if (auto_lpm) {
        lv_obj_add_state(objects.power_setting_scr_lpm_checkbox, LV_STATE_CHECKED);
    } else {
        lv_obj_remove_state(objects.power_setting_scr_lpm_checkbox, LV_STATE_CHECKED);
    }

    if (auto_sleep) {
        lv_obj_add_state(objects.power_setting_scr_auto_sleep_checkbox, LV_STATE_CHECKED);
    } else {
        lv_obj_remove_state(objects.power_setting_scr_auto_sleep_checkbox, LV_STATE_CHECKED);
    }

    /* 设置 slider 值（范围 75-95） */
    if (chg_thr < 75) chg_thr = 75;
    if (chg_thr > 95) chg_thr = 95;
    lv_slider_set_value(objects.power_setting_scr_charge_limit_slider, chg_thr, LV_ANIM_OFF);

    /* 设置 label 文本 */
    lv_label_set_text_fmt(objects.power_setting_scr_charge_limit_label, "%d%%", chg_thr);

    power_setting_set_time_value(POWER_SETTING_TIME_FIELD_START_HOUR, start_hour);
    power_setting_set_time_value(POWER_SETTING_TIME_FIELD_START_MINUTE, start_minute);
    power_setting_set_time_value(POWER_SETTING_TIME_FIELD_END_HOUR, end_hour);
    power_setting_set_time_value(POWER_SETTING_TIME_FIELD_END_MINUTE, end_minute);

    s_power_setting_active_field = -1;
    s_power_setting_editing = false;
}

static void on_screen_unload_start(void)
{
    bool auto_lpm = lv_obj_has_state(objects.power_setting_scr_lpm_checkbox, LV_STATE_CHECKED);
    bool auto_sleep = lv_obj_has_state(objects.power_setting_scr_auto_sleep_checkbox, LV_STATE_CHECKED);
    int32_t chg_thr = lv_slider_get_value(objects.power_setting_scr_charge_limit_slider);
    uint8_t start_hour = (uint8_t)power_setting_get_time_value(POWER_SETTING_TIME_FIELD_START_HOUR);
    uint8_t start_minute = (uint8_t)power_setting_get_time_value(POWER_SETTING_TIME_FIELD_START_MINUTE);
    uint8_t end_hour = (uint8_t)power_setting_get_time_value(POWER_SETTING_TIME_FIELD_END_HOUR);
    uint8_t end_minute = (uint8_t)power_setting_get_time_value(POWER_SETTING_TIME_FIELD_END_MINUTE);

    ESP_LOGI(TAG,
             "unload: auto_lpm=%d, auto_sleep=%d, chg_thr=%ld%%, sleep_period=%02u:%02u-%02u:%02u",
             auto_lpm,
             auto_sleep,
             (long)chg_thr,
             start_hour,
             start_minute,
             end_hour,
             end_minute);

    /* 写入 NVS */
    nvs_handle_t h;
    if (nvs_open(NVS_NAMESPACE, NVS_READWRITE, &h) == ESP_OK) {
        nvs_set_u8(h, NVS_KEY_AUTO_LPM, auto_lpm ? 1 : 0);
        nvs_set_u8(h, NVS_KEY_AUTO_SLEEP, auto_sleep ? 1 : 0);
        nvs_set_u8(h, NVS_KEY_CHG_THR, (uint8_t)chg_thr);
        nvs_set_u8(h, NVS_KEY_SLEEP_START_HOUR, start_hour);
        nvs_set_u8(h, NVS_KEY_SLEEP_START_MINUTE, start_minute);
        nvs_set_u8(h, NVS_KEY_SLEEP_END_HOUR, end_hour);
        nvs_set_u8(h, NVS_KEY_SLEEP_END_MINUTE, end_minute);
        nvs_commit(h);
        nvs_close(h);
    } else {
        ESP_LOGE(TAG, "failed to open NVS for write");
    }

    /* 立即生效 */
    power_management_set_auto_lightsleep(auto_lpm);
    power_management_set_auto_sleep(auto_sleep);
    power_management_set_charge_threshold((uint8_t)chg_thr);
}

/* ---- 公共接口 ---- */

void handle_power_setting_scr_event(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_SCREEN_LOAD_START) {
        on_screen_load_start();
    } else if (code == LV_EVENT_SCREEN_UNLOAD_START) {
        on_screen_unload_start();
    }
}

void handle_power_setting_scr_charge_limit_slider_event(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        int32_t val = lv_slider_get_value(objects.power_setting_scr_charge_limit_slider);
        lv_label_set_text_fmt(objects.power_setting_scr_charge_limit_label, "%d%%", (int)val);
    }
}

void handle_power_setting_scr_time_btn_event(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *target = (lv_obj_t *)lv_event_get_target(e);
    uint8_t field = (uint8_t)(uintptr_t)lv_event_get_user_data(e);
    lv_group_t *group = lv_obj_get_group(target);

    if (field >= POWER_SETTING_TIME_FIELD_COUNT) {
        return;
    }

    if (code == LV_EVENT_CLICKED) {
        bool same_field = (s_power_setting_active_field == (int8_t)field);
        if (same_field) {
            s_power_setting_editing = !s_power_setting_editing;
        } else {
            if (s_power_setting_active_field >= 0) {
                power_setting_set_time_editing_state((uint8_t)s_power_setting_active_field, false);
            }
            s_power_setting_active_field = (int8_t)field;
            s_power_setting_editing = true;
        }

        if (group != NULL) {
            lv_group_set_editing(group, s_power_setting_editing);
        }

        power_setting_set_time_editing_state(field, s_power_setting_editing);
        if (!s_power_setting_editing) {
            s_power_setting_active_field = -1;
        }
        return;
    }

    if (code == LV_EVENT_KEY) {
        if (!s_power_setting_editing || s_power_setting_active_field != (int8_t)field) {
            return;
        }

        uint32_t key = lv_event_get_key(e);
        int32_t delta = 0;
        if (key == LV_KEY_LEFT) {
            delta = -1;
        } else if (key == LV_KEY_RIGHT) {
            delta = 1;
        } else {
            return;
        }

        power_setting_set_time_value(field, power_setting_get_time_value(field) + delta);
        return;
    }

    if (code == LV_EVENT_DEFOCUSED) {
        power_setting_set_time_editing_state(field, false);
        if (s_power_setting_active_field == (int8_t)field) {
            s_power_setting_active_field = -1;
            s_power_setting_editing = false;
            if (group != NULL) {
                lv_group_set_editing(group, false);
            }
        }
    }
}
