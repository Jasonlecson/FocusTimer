#include "data_sync_screen_calls.h"

#include "ble.h"
#include "lvgl_user.h"
#include "screens.h"
#include "ui.h"

#include "esp_err.h"
#include "esp_log.h"
#include "esp_timer.h"

#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"
#include "freertos/task.h"

#define TAG "data_sync_scr"

#define DATA_SYNC_BLE_TIMEOUT_US (120ULL * 1000000ULL)

static esp_timer_handle_t s_ble_timeout_timer = NULL;
static bool s_checkbox_cb_attached = false;
static bool s_ignore_checkbox_event = false;
static bool s_ble_cb_registered = false;

typedef struct {
    bool enable;
    bool update_checkbox;
} data_sync_ble_cmd_t;

static QueueHandle_t s_ble_cmd_queue = NULL;
static TaskHandle_t s_ble_ctrl_task_handle = NULL;

static void data_sync_update_status_label(bool connected)
{
    if (objects.data_sync_scr_ble_status_label == NULL) {
        return;
    }

    if (connected) {
        lv_label_set_text(objects.data_sync_scr_ble_status_label, "设备已连接");
    } else {
        lv_label_set_text(objects.data_sync_scr_ble_status_label, "设备未连接");
    }
}

static void data_sync_set_checkbox_checked(bool checked)
{
    if (objects.data_sync_scr_ble_checkbox == NULL) {
        return;
    }

    s_ignore_checkbox_event = true;
    if (checked) {
        lv_obj_add_state(objects.data_sync_scr_ble_checkbox, LV_STATE_CHECKED);
    } else {
        lv_obj_remove_state(objects.data_sync_scr_ble_checkbox, LV_STATE_CHECKED);
    }
    s_ignore_checkbox_event = false;
}

static void data_sync_stop_timeout_timer(void)
{
    if (s_ble_timeout_timer == NULL) {
        return;
    }

    (void)esp_timer_stop(s_ble_timeout_timer);
}

static void data_sync_start_timeout_timer_if_needed(void)
{
    if (s_ble_timeout_timer == NULL) {
        return;
    }

    if (esp_timer_is_active(s_ble_timeout_timer)) {
        return;
    }

    esp_err_t err = esp_timer_start_once(s_ble_timeout_timer, DATA_SYNC_BLE_TIMEOUT_US);
    if (err != ESP_OK) {
        ESP_LOGW(TAG, "start timeout timer failed: %s", esp_err_to_name(err));
    }
}

static void data_sync_ble_timeout_cb(void *arg)
{
    (void)arg;

    if (ble_is_connected()) {
        return;
    }

    // Auto-close advertising if nobody connected within timeout.
    if (s_ble_cmd_queue != NULL) {
        data_sync_ble_cmd_t cmd = {
            .enable = false,
            .update_checkbox = true,
        };
        (void)xQueueOverwrite(s_ble_cmd_queue, &cmd);
    }
}

static void data_sync_ble_conn_state_cb(bool connected, void *arg)
{
    (void)arg;

    _lock_acquire(&lvgl_api_lock);
    data_sync_update_status_label(connected);
    _lock_release(&lvgl_api_lock);

    if (connected) {
        data_sync_stop_timeout_timer();
        return;
    }

    // Disconnected: if user still enabled BLE, restart 2-min timeout window.
    if (ble_is_advertising_enabled()) {
        data_sync_start_timeout_timer_if_needed();
    }
}

static void data_sync_ble_checkbox_event_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code != LV_EVENT_VALUE_CHANGED) {
        return;
    }

    if (s_ignore_checkbox_event) {
        return;
    }

    bool checked = lv_obj_has_state(objects.data_sync_scr_ble_checkbox, LV_STATE_CHECKED);
    if (checked) {
        if (s_ble_cmd_queue != NULL) {
            data_sync_ble_cmd_t cmd = {
                .enable = true,
                .update_checkbox = false,
            };
            (void)xQueueOverwrite(s_ble_cmd_queue, &cmd);
        }
        data_sync_update_status_label(ble_is_connected());
        if (!ble_is_connected()) {
            // Start 2-min countdown from the moment user enables BLE.
            data_sync_stop_timeout_timer();
            data_sync_start_timeout_timer_if_needed();
        }
    } else {
        if (s_ble_cmd_queue != NULL) {
            data_sync_ble_cmd_t cmd = {
                .enable = false,
                .update_checkbox = false,
            };
            (void)xQueueOverwrite(s_ble_cmd_queue, &cmd);
        }
        data_sync_stop_timeout_timer();
        data_sync_update_status_label(false);
    }
}

static void data_sync_ble_ctrl_task(void *arg)
{
    (void)arg;

    data_sync_ble_cmd_t cmd;
    while (1) {
        if (xQueueReceive(s_ble_cmd_queue, &cmd, portMAX_DELAY) != pdTRUE) {
            continue;
        }

        (void)ble_set_advertising_enabled(cmd.enable);

        if (!cmd.enable) {
            _lock_acquire(&lvgl_api_lock);
            if (cmd.update_checkbox) {
                data_sync_set_checkbox_checked(false);
            }
            data_sync_update_status_label(false);
            _lock_release(&lvgl_api_lock);
        }
    }
}

static void data_sync_init_once(void)
{
    if (s_ble_cmd_queue == NULL) {
        s_ble_cmd_queue = xQueueCreate(1, sizeof(data_sync_ble_cmd_t));
    }

    if (s_ble_ctrl_task_handle == NULL && s_ble_cmd_queue != NULL) {
        (void)xTaskCreate(data_sync_ble_ctrl_task, "ds_ble_ctl", 4096, NULL, 5, &s_ble_ctrl_task_handle);
    }

    if (s_ble_timeout_timer == NULL) {
        const esp_timer_create_args_t timeout_timer_args = {
            .callback = data_sync_ble_timeout_cb,
            .name = "ds_ble_to",
        };
        esp_err_t err = esp_timer_create(&timeout_timer_args, &s_ble_timeout_timer);
        if (err != ESP_OK) {
            ESP_LOGE(TAG, "create timeout timer failed: %s", esp_err_to_name(err));
            s_ble_timeout_timer = NULL;
        }
    }

    if (!s_ble_cb_registered) {
        (void)ble_register_connection_state_cb(data_sync_ble_conn_state_cb, NULL);
        s_ble_cb_registered = true;
    }

    if (!s_checkbox_cb_attached && objects.data_sync_scr_ble_checkbox != NULL) {
        lv_obj_add_event_cb(objects.data_sync_scr_ble_checkbox, data_sync_ble_checkbox_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
        s_checkbox_cb_attached = true;
    }
}

void handle_data_sync_scr_event(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if (code != LV_EVENT_SCREEN_LOAD_START && code != LV_EVENT_SCREEN_UNLOAD_START) {
        return;
    }

    if (code == LV_EVENT_SCREEN_LOAD_START) {
        data_sync_init_once();

        // Reflect current BLE state.
        bool enabled = ble_is_advertising_enabled();
        bool connected = ble_is_connected();

        data_sync_set_checkbox_checked(enabled);
        data_sync_update_status_label(connected);

        if (enabled && !connected) {
            data_sync_start_timeout_timer_if_needed();
        }
    }

    if (code == LV_EVENT_SCREEN_UNLOAD_START) {
        // No persistence: do not write to NVS. Keep runtime state as-is.
    }
}
