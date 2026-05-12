#include <string.h>
#include <stdlib.h>
#include "esp_log.h"
#include "nvs_flash.h"

#include "cJSON.h"

#include "nimble/nimble_port.h"
#include "nimble/nimble_port_freertos.h"
#include "host/ble_hs.h"
#include "host/util/util.h"
#include "services/gap/ble_svc_gap.h"
#include "services/gatt/ble_svc_gatt.h"

#include "ble.h"
#include "nvs_storage.h"
#include "esp_bt.h"
#include "pcf85263a.h"

#define TAG "BLE"

/* Device name advertised over BLE */
#define BLE_DEVICE_NAME "FocusTimer"

/* Advertising interval (0.625ms units): 800 = 0.5s */
#define BLE_ADV_INTERVAL_MIN 800
#define BLE_ADV_INTERVAL_MAX 3200

/* Custom 128-bit UUIDs for the FocusTimer service and characteristics */
/* Service:    00000000-0000-0000-0000-0000-0000-FFF0 */
static const ble_uuid128_t focus_timer_svc_uuid =
    BLE_UUID128_INIT(0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

/* Characteristic 1 (current day data): 00000000-0000-0000-0000-0000-0000-0001 */
static const ble_uuid128_t current_day_chr_uuid =
    BLE_UUID128_INIT(0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

/* Characteristic 2 (history JSON):     00000000-0000-0000-0000-0000-0000-0002 */
static const ble_uuid128_t history_chr_uuid =
    BLE_UUID128_INIT(0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

/* Characteristic 3 (set datetime JSON): 00000000-0000-0000-0000-0000-0000-0003 */
static const ble_uuid128_t datetime_set_chr_uuid =
    BLE_UUID128_INIT(0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

static uint16_t current_day_chr_val_handle;
static uint16_t history_chr_val_handle;
static uint16_t datetime_set_chr_val_handle;

static bool ble_connected;
static uint16_t ble_conn_handle;
static uint8_t own_addr_type;
static bool ble_synced;
static bool ble_adv_enabled;
static bool ble_inited;

static ble_connection_state_cb_t s_conn_state_cb;
static void *s_conn_state_cb_arg;
static ble_datetime_updated_cb_t s_datetime_updated_cb;
static void *s_datetime_updated_cb_arg;

static void ble_notify_conn_state(bool connected)
{
    if (s_conn_state_cb != NULL) {
        s_conn_state_cb(connected, s_conn_state_cb_arg);
    }
}

static void ble_notify_datetime_updated(void)
{
    if (s_datetime_updated_cb != NULL) {
        s_datetime_updated_cb(s_datetime_updated_cb_arg);
    }
}

static esp_err_t ble_stack_deinit(void)
{
    if (!ble_inited) {
        ble_adv_enabled = false;
        ble_synced = false;
        ble_connected = false;
        return ESP_OK;
    }

    ble_adv_enabled = false;

    // Best-effort stop advertising / terminate connection.
    (void)ble_stop();

    int rc = nimble_port_stop();
    if (rc != 0) {
        ESP_LOGW(TAG, "nimble_port_stop failed: %d", rc);
    }

    nimble_port_deinit();

    ble_inited = false;
    ble_synced = false;
    ble_connected = false;
    ble_conn_handle = 0;
    own_addr_type = 0;

    ESP_LOGI(TAG, "BLE stack deinitialized");
    return ESP_OK;
}

/* Forward declarations */
static void ble_host_task(void *param);
static void ble_on_sync(void);
static void ble_on_reset(int reason);
static int gap_event_handler(struct ble_gap_event *event, void *arg);
static int gatt_access_cb(uint16_t conn_handle, uint16_t attr_handle,
                          struct ble_gatt_access_ctxt *ctxt, void *arg);
static int ble_handle_datetime_write(struct ble_gatt_access_ctxt *ctxt);
static esp_err_t ble_parse_datetime_json(const char *json, pcf85263a_datetime_t *datetime);
void ble_store_config_init(void);

static bool ble_json_get_int(const cJSON *object, const char *name, int *value)
{
    const cJSON *item = cJSON_GetObjectItemCaseSensitive(object, name);
    if (!cJSON_IsNumber(item)) {
        return false;
    }

    *value = item->valueint;
    return true;
}

static esp_err_t ble_parse_datetime_json(const char *json, pcf85263a_datetime_t *datetime)
{
    cJSON *root = cJSON_Parse(json);
    if (root == NULL) {
        ESP_LOGW(TAG, "Invalid datetime JSON");
        return ESP_ERR_INVALID_ARG;
    }

    const cJSON *date = cJSON_GetObjectItemCaseSensitive(root, "date");
    const cJSON *time = cJSON_GetObjectItemCaseSensitive(root, "time");
    const cJSON *weekday = cJSON_GetObjectItemCaseSensitive(root, "weekday");
    int year = 0;
    int month = 0;
    int day = 0;
    int hour = 0;
    int minute = 0;
    int second = 0;
    int weekday_index = 0;

    if (!cJSON_IsObject(date) ||
        !ble_json_get_int(date, "year", &year) ||
        !ble_json_get_int(date, "month", &month) ||
        !ble_json_get_int(date, "day", &day) ||
        !cJSON_IsObject(time) ||
        !ble_json_get_int(time, "hour", &hour) ||
        !ble_json_get_int(time, "minute", &minute) ||
        !ble_json_get_int(time, "second", &second) ||
        !cJSON_IsObject(weekday) ||
        !ble_json_get_int(weekday, "index", &weekday_index)) {
        cJSON_Delete(root);
        ESP_LOGW(TAG, "Datetime JSON missing required fields");
        return ESP_ERR_INVALID_ARG;
    }

    cJSON_Delete(root);

    if (year < 2000 || year > 2099 ||
        month < 1 || month > 12 ||
        day < 1 || day > 31 ||
        hour < 0 || hour > 23 ||
        minute < 0 || minute > 59 ||
        second < 0 || second > 59 ||
        weekday_index < 0 || weekday_index > 6) {
        ESP_LOGW(TAG, "Datetime JSON value out of range");
        return ESP_ERR_INVALID_ARG;
    }

    datetime->year = (uint16_t)year;
    datetime->month = (uint8_t)month;
    datetime->day = (uint8_t)day;
    datetime->hour = (uint8_t)hour;
    datetime->minute = (uint8_t)minute;
    datetime->second = (uint8_t)second;
    datetime->weekday = (uint8_t)weekday_index;
    return ESP_OK;
}

static int ble_handle_datetime_write(struct ble_gatt_access_ctxt *ctxt)
{
    uint16_t payload_len = OS_MBUF_PKTLEN(ctxt->om);
    char *json_buf = NULL;
    pcf85263a_datetime_t datetime = {0};
    pcf85263a_handle_t rtc_handle = pcf85263a_get_handle();

    if (rtc_handle == NULL) {
        ESP_LOGE(TAG, "RTC handle unavailable");
        return BLE_ATT_ERR_UNLIKELY;
    }

    if (payload_len == 0U) {
        return BLE_ATT_ERR_INVALID_ATTR_VALUE_LEN;
    }

    json_buf = calloc((size_t)payload_len + 1U, sizeof(char));
    if (json_buf == NULL) {
        ESP_LOGE(TAG, "Failed to allocate datetime JSON buffer");
        return BLE_ATT_ERR_INSUFFICIENT_RES;
    }

    int rc = os_mbuf_copydata(ctxt->om, 0, payload_len, json_buf);
    if (rc != 0) {
        free(json_buf);
        ESP_LOGE(TAG, "Failed to copy datetime payload: %d", rc);
        return BLE_ATT_ERR_UNLIKELY;
    }

    esp_err_t err = ble_parse_datetime_json(json_buf, &datetime);
    free(json_buf);
    if (err != ESP_OK) {
        return BLE_ATT_ERR_INVALID_PDU;
    }

    err = pcf85263a_set_datetime(rtc_handle, &datetime);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "Failed to set RTC datetime: %s", esp_err_to_name(err));
        return BLE_ATT_ERR_UNLIKELY;
    }

    ble_notify_datetime_updated();

    ESP_LOGI(TAG, "RTC datetime updated over BLE: %u-%02u-%02u %02u:%02u:%02u weekday=%u",
             datetime.year, datetime.month, datetime.day,
             datetime.hour, datetime.minute, datetime.second, datetime.weekday);
    return 0;
}

/*** GATT service definition ***/
static const struct ble_gatt_svc_def gatt_svcs[] = {
    {
        .type = BLE_GATT_SVC_TYPE_PRIMARY,
        .uuid = &focus_timer_svc_uuid.u,
        .characteristics = (struct ble_gatt_chr_def[]) {
            {
                /* Current day totals (6-byte binary) */
                .uuid = &current_day_chr_uuid.u,
                .access_cb = gatt_access_cb,
                .flags = BLE_GATT_CHR_F_READ,
                .val_handle = &current_day_chr_val_handle,
            }, {
                /* History records JSON */
                .uuid = &history_chr_uuid.u,
                .access_cb = gatt_access_cb,
                .flags = BLE_GATT_CHR_F_READ,
                .val_handle = &history_chr_val_handle,
            }, {
                /* Set RTC datetime JSON */
                .uuid = &datetime_set_chr_uuid.u,
                .access_cb = gatt_access_cb,
                .flags = BLE_GATT_CHR_F_WRITE,
                .val_handle = &datetime_set_chr_val_handle,
            }, {
                0, /* Terminator */
            },
        },
    },
    {
        0, /* Terminator */
    },
};

/*** GATT access callback — will be fully implemented in Stage 2 ***/
static int gatt_access_cb(uint16_t conn_handle, uint16_t attr_handle,
                          struct ble_gatt_access_ctxt *ctxt, void *arg)
{
    int rc;

    switch (ctxt->op) {
    case BLE_GATT_ACCESS_OP_READ_CHR:
        ESP_LOGD(TAG, "GATT read: conn_handle=%d attr_handle=%d",
                 conn_handle, attr_handle);

        if (attr_handle == current_day_chr_val_handle) {
            nvs_storage_daily_totals_t totals;
            esp_err_t err = nvs_storage_get_daily_totals(&totals);
            if (err != ESP_OK) {
                ESP_LOGE(TAG, "Failed to get daily totals: %s", esp_err_to_name(err));
                return BLE_ATT_ERR_UNLIKELY;
            }
            rc = os_mbuf_append(ctxt->om, &totals, sizeof(totals));
            return rc == 0 ? 0 : BLE_ATT_ERR_INSUFFICIENT_RES;
        }

        if (attr_handle == history_chr_val_handle) {
            char *json_buf = malloc(2048);
            if (json_buf == NULL) {
                ESP_LOGE(TAG, "Failed to allocate JSON buffer");
                return BLE_ATT_ERR_INSUFFICIENT_RES;
            }
            size_t json_len = 0;
            esp_err_t err = nvs_storage_get_records_json(json_buf, 2048, &json_len);
            if (err != ESP_OK) {
                ESP_LOGE(TAG, "Failed to get records JSON: %s", esp_err_to_name(err));
                free(json_buf);
                return BLE_ATT_ERR_UNLIKELY;
            }
            rc = os_mbuf_append(ctxt->om, json_buf, json_len);
            free(json_buf);
            return rc == 0 ? 0 : BLE_ATT_ERR_INSUFFICIENT_RES;
        }
        break;

    case BLE_GATT_ACCESS_OP_WRITE_CHR:
        ESP_LOGD(TAG, "GATT write: conn_handle=%d attr_handle=%d",
                 conn_handle, attr_handle);

        if (attr_handle == datetime_set_chr_val_handle) {
            return ble_handle_datetime_write(ctxt);
        }
        break;

    default:
        break;
    }

    return BLE_ATT_ERR_ATTR_NOT_FOUND;
}

/*** GAP event handler ***/
static int gap_event_handler(struct ble_gap_event *event, void *arg)
{
    switch (event->type) {
    case BLE_GAP_EVENT_CONNECT:
        ESP_LOGD(TAG, "BLE_GAP_EVENT_CONNECT; status=%d",
                 event->connect.status);
        if (event->connect.status == 0) {
            ble_connected = true;
            ble_conn_handle = event->connect.conn_handle;
            ble_notify_conn_state(true);
        } else {
            /* Connection failed; resume advertising */
            ble_connected = false;
            ble_notify_conn_state(false);
            if (ble_adv_enabled) {
                ble_start_advertising();
            }
        }
        break;

    case BLE_GAP_EVENT_DISCONNECT:
        ESP_LOGD(TAG, "BLE_GAP_EVENT_DISCONNECT; reason=%d",
                 event->disconnect.reason);
        ble_connected = false;
        ble_notify_conn_state(false);
        if (ble_adv_enabled) {
            ble_start_advertising();
        }
        break;

    case BLE_GAP_EVENT_ADV_COMPLETE:
        ESP_LOGD(TAG, "BLE_GAP_EVENT_ADV_COMPLETE; reason=%d",
                 event->adv_complete.reason);
        break;

    case BLE_GAP_EVENT_MTU:
        ESP_LOGD(TAG, "MTU update: conn_handle=%d mtu=%d",
                 event->mtu.conn_handle, event->mtu.value);
        break;

    default:
        break;
    }
    return 0;
}

/*** BLE sync callback — called when controller is ready ***/
static void ble_on_sync(void)
{
    int rc;

    /* Make sure we have a proper address (public for ESP32-H2) */
    rc = ble_hs_id_infer_auto(0, &own_addr_type);
    if (rc != 0) {
        ESP_LOGE(TAG, "Failed to infer address type: %d", rc);
        return;
    }

    ble_synced = true;
    ESP_LOGI(TAG, "BLE synced");

    if (ble_adv_enabled) {
        ESP_LOGI(TAG, "BLE advertising enabled, starting advertising");
        ble_start_advertising();
    }
}

/*** BLE reset callback ***/
static void ble_on_reset(int reason)
{
    ESP_LOGE(TAG, "BLE host reset; reason=%d", reason);
    ble_connected = false;
    ble_synced = false;
    ble_notify_conn_state(false);
}

/*** NimBLE host task ***/
static void ble_host_task(void *param)
{
    ESP_LOGI(TAG, "BLE host task started");
    nimble_port_run();
    nimble_port_freertos_deinit();
}

/*** Public API ***/

esp_err_t ble_init(void)
{
    int rc;

    if (ble_inited) {
        return ESP_OK;
    }

    ble_connected = false;
    ble_synced = false;
    ble_conn_handle = 0;

    rc = nimble_port_init();
    if (rc != ESP_OK) {
        ESP_LOGE(TAG, "Failed to init NimBLE: %d", rc);
        return rc;
    }

    /* Configure BLE host */
    ble_hs_cfg.reset_cb = ble_on_reset;
    ble_hs_cfg.sync_cb = ble_on_sync;
    ble_hs_cfg.store_status_cb = ble_store_util_status_rr;

    /* No security/pairing needed for this device */
    ble_hs_cfg.sm_io_cap = BLE_SM_IO_CAP_NO_IO;
    ble_hs_cfg.sm_bonding = 0;
    ble_hs_cfg.sm_mitm = 0;
    ble_hs_cfg.sm_sc = 0;

    /* Register GATT services */
    rc = ble_gatts_count_cfg(gatt_svcs);
    if (rc != 0) {
        ESP_LOGE(TAG, "Failed to count GATT config: %d", rc);
        return ESP_FAIL;
    }

    rc = ble_gatts_add_svcs(gatt_svcs);
    if (rc != 0) {
        ESP_LOGE(TAG, "Failed to add GATT services: %d", rc);
        return ESP_FAIL;
    }

    /* Set device name */
    rc = ble_svc_gap_device_name_set(BLE_DEVICE_NAME);
    if (rc != 0) {
        ESP_LOGE(TAG, "Failed to set device name: %d", rc);
        return ESP_FAIL;
    }

    /* Initialize BLE store (for bonding data, even though we don't bond) */
    ble_store_config_init();

    /* Start NimBLE host task */
    nimble_port_freertos_init(ble_host_task);

    ESP_LOGI(TAG, "BLE init OK");
    ble_inited = true;
    return ESP_OK;
}

esp_err_t ble_start_advertising(void)
{
    struct ble_gap_adv_params adv_params;
    struct ble_hs_adv_fields adv_fields;
    struct ble_hs_adv_fields rsp_fields;
    int rc;

    if (!ble_inited) {
        return ESP_ERR_INVALID_STATE;
    }

    if (!ble_synced) {
        ESP_LOGW(TAG, "BLE not synced yet, cannot start advertising");
        return ESP_ERR_INVALID_STATE;
    }

    if (ble_gap_adv_active()) {
        return ESP_OK;
    }

    /* --- Advertising data: flags + 128-bit service UUID (fits in 31 bytes) --- */
    memset(&adv_fields, 0, sizeof(adv_fields));
    adv_fields.flags = BLE_HS_ADV_F_DISC_GEN | BLE_HS_ADV_F_BREDR_UNSUP;
    adv_fields.uuids128 = &focus_timer_svc_uuid;
    adv_fields.num_uuids128 = 1;
    adv_fields.uuids128_is_complete = 1;

    rc = ble_gap_adv_set_fields(&adv_fields);
    if (rc != 0) {
        ESP_LOGE(TAG, "Failed to set adv fields: %d", rc);
        return ESP_FAIL;
    }

    /* --- Scan response data: complete device name --- */
    memset(&rsp_fields, 0, sizeof(rsp_fields));
    const char *name = ble_svc_gap_device_name();
    rsp_fields.name = (uint8_t *)name;
    rsp_fields.name_len = strlen(name);
    rsp_fields.name_is_complete = 1;

    rc = ble_gap_adv_rsp_set_fields(&rsp_fields);
    if (rc != 0) {
        ESP_LOGE(TAG, "Failed to set scan rsp fields: %d", rc);
        return ESP_FAIL;
    }

    /* Undirected connectable, general discoverable */
    memset(&adv_params, 0, sizeof(adv_params));
    adv_params.conn_mode = BLE_GAP_CONN_MODE_UND;
    adv_params.disc_mode = BLE_GAP_DISC_MODE_GEN;
    adv_params.itvl_min = BLE_ADV_INTERVAL_MIN;
    adv_params.itvl_max = BLE_ADV_INTERVAL_MAX;

    rc = ble_gap_adv_start(own_addr_type, NULL, BLE_HS_FOREVER,
                           &adv_params, gap_event_handler, NULL);
    if (rc != 0) {
        ESP_LOGE(TAG, "Failed to start advertising: %d", rc);
        return ESP_FAIL;
    }

    ESP_LOGI(TAG, "BLE advertising started");
    return ESP_OK;
}

esp_err_t ble_stop(void)
{
    int rc;

    if (!ble_inited) {
        ble_connected = false;
        return ESP_OK;
    }

    if (!ble_synced) {
        ble_connected = false;
        return ESP_OK;
    }

    if (ble_connected) {
        rc = ble_gap_terminate(ble_conn_handle, BLE_ERR_REM_USER_CONN_TERM);
        if (rc != 0) {
            ESP_LOGW(TAG, "Failed to terminate connection: %d", rc);
        }
        ble_connected = false;
    }

    if (ble_gap_adv_active()) {
        rc = ble_gap_adv_stop();
        if (rc != 0) {
            ESP_LOGW(TAG, "Failed to stop advertising: %d", rc);
            return ESP_FAIL;
        }
        ESP_LOGI(TAG, "BLE advertising stopped");
    }

    return ESP_OK;
}

esp_err_t ble_set_advertising_enabled(bool enabled)
{
    if (!enabled) {
        // Fully shutdown BLE stack to restore lowest light-sleep current.
        return ble_stack_deinit();
    }

    ble_adv_enabled = true;

    if (!ble_inited) {
        esp_err_t err = ble_init();
        if (err != ESP_OK) {
            ble_adv_enabled = false;
            return err;
        }
    }

    if (!ble_synced) {
        // Will be started from ble_on_sync()
        return ESP_OK;
    }

    if (!ble_connected) {
        return ble_start_advertising();
    }

    return ESP_OK;
}

bool ble_is_advertising_enabled(void)
{
    return ble_adv_enabled;
}

void ble_register_connection_state_cb(ble_connection_state_cb_t cb, void *arg)
{
    s_conn_state_cb = cb;
    s_conn_state_cb_arg = arg;
}

void ble_register_datetime_updated_cb(ble_datetime_updated_cb_t cb, void *arg)
{
    s_datetime_updated_cb = cb;
    s_datetime_updated_cb_arg = arg;
}

bool ble_is_connected(void)
{
    return ble_connected;
}
