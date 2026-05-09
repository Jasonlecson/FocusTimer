#include "power_setting_screen_calls.h"
#include "ui.h"
#include "screens.h"
#include "power_management.h"

#include <stdio.h>
#include "esp_log.h"
#include "nvs_flash.h"
#include "nvs.h"

#define TAG "pwr_setting_scr"

/* NVS 键名 — 与 power_management 组件保持一致 */
#define NVS_NAMESPACE      "power_mgr"
#define NVS_KEY_AUTO_LPM   "pm_auto_lpm"
#define NVS_KEY_AUTO_SLEEP "pm_auto_sleep"
#define NVS_KEY_CHG_THR    "pm_chg_thr"

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

/* ---- 屏幕 load / unload ---- */

static void on_screen_load_start(void)
{
    bool auto_lpm   = nvs_read_bool_default(NVS_KEY_AUTO_LPM, false);
    bool auto_sleep = nvs_read_bool_default(NVS_KEY_AUTO_SLEEP, false);
    uint8_t chg_thr = nvs_read_u8_default(NVS_KEY_CHG_THR, 90);

    ESP_LOGI(TAG, "load: auto_lpm=%d, auto_sleep=%d, chg_thr=%d%%", auto_lpm, auto_sleep, chg_thr);

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
}

static void on_screen_unload_start(void)
{
    bool auto_lpm = lv_obj_has_state(objects.power_setting_scr_lpm_checkbox, LV_STATE_CHECKED);
    bool auto_sleep = lv_obj_has_state(objects.power_setting_scr_auto_sleep_checkbox, LV_STATE_CHECKED);
    int32_t chg_thr = lv_slider_get_value(objects.power_setting_scr_charge_limit_slider);

    ESP_LOGI(TAG, "unload: auto_lpm=%d, auto_sleep=%d, chg_thr=%ld%%", auto_lpm, auto_sleep, (long)chg_thr);

    /* 写入 NVS */
    nvs_handle_t h;
    if (nvs_open(NVS_NAMESPACE, NVS_READWRITE, &h) == ESP_OK) {
        nvs_set_u8(h, NVS_KEY_AUTO_LPM, auto_lpm ? 1 : 0);
        nvs_set_u8(h, NVS_KEY_AUTO_SLEEP, auto_sleep ? 1 : 0);
        nvs_set_u8(h, NVS_KEY_CHG_THR, (uint8_t)chg_thr);
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
