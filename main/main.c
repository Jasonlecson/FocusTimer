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
#include "nvs_flash.h"
#include "power_management.h"
#include "st7305_2p9.h"
#include "ble.h"
#include "pinmap.h"

#define TAG "main"

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

void app_main(void)
{
    esp_sleep_wakeup_cause_t wake_cause = esp_sleep_get_wakeup_cause();
    int touch_level_at_boot = gpio_get_level(TOUCH_INT_PIN);
    ESP_LOGI(TAG, "boot, wakeup cause=%d, touch_int_level_at_boot=%d", (int)wake_cause, touch_level_at_boot);

    ESP_ERROR_CHECK_WITHOUT_ABORT(storage_init_nvs_flash());
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

    // 屏幕及LVGL相关
    bool wakeup_from_timer = power_management_is_wakeup_from_timer();
    bool wakeup_by_touch = power_management_is_wakeup_by_touch();
    int touch_int_level = gpio_get_level(TOUCH_INT_PIN);
    ESP_LOGI(TAG, "wakeup flags: timer=%d, touch=%d, touch_int_level=%d", wakeup_from_timer, wakeup_by_touch, touch_int_level);

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

    if (wakeup_from_timer)
    {
        /* 定时唤醒用于刷新显示：先确保屏幕在 HPM，避免 LPM 下刷新不可见 */
        esp_lcd_panel_st7305_set_power_mode(panel_handle, ST7305_PWR_MODE_HPM);
        (void)main_screen_refresh_once(1200);

        /* 强制执行一次 LVGL 刷新，确保在进入 deep sleep 前已完成 SPI flush */
        _lock_acquire(&lvgl_api_lock);
        if (lvgl_display != NULL)
        {
            lv_refr_now(lvgl_display);
        }
        _lock_release(&lvgl_api_lock);
        vTaskDelay(pdMS_TO_TICKS(120));

        /* 自动从 deep sleep 唤醒时，更新显示后通常会立即再次进入 deep sleep。
           但若在本次唤醒点用户正在触摸（INT 线已为低），则保留唤醒态以便操作。 */
        if (touch_level_at_boot == 0)
        {
            ESP_LOGI(TAG, "touch asserted during timer wake, stay awake");
        }
        else
        {
            power_management_enter_deepsleep(58000); ///58s后唤醒
        }
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