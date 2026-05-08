#include "nvs_storage.h"

#include <stdbool.h>
#include <string.h>

#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/portmacro.h"

#define NVS_STORAGE_NAMESPACE "pomodoro"

static const char *TAG = "nvs_storage";

typedef struct
{
    bool initialized;
    nvs_storage_daily_totals_t totals;
} nvs_storage_state_t;

static portMUX_TYPE s_nvs_storage_lock = portMUX_INITIALIZER_UNLOCKED;
static nvs_storage_state_t s_nvs_storage_state = {
    .initialized = false,
    .totals = {0},
};

esp_err_t nvs_storage_init(void)
{
    portENTER_CRITICAL(&s_nvs_storage_lock);
    s_nvs_storage_state.initialized = true;
    memset(&s_nvs_storage_state.totals, 0, sizeof(s_nvs_storage_state.totals));
    portEXIT_CRITICAL(&s_nvs_storage_lock);

    ESP_LOGI(TAG, "storage skeleton initialized for namespace %s", NVS_STORAGE_NAMESPACE);
    return ESP_OK;
}

esp_err_t nvs_storage_save_daily_record(void)
{
    if (!s_nvs_storage_state.initialized)
    {
        return ESP_ERR_INVALID_STATE;
    }

    return ESP_OK;
}

esp_err_t nvs_storage_get_records_json(char *buffer, size_t buffer_size, size_t *out_length)
{
    static const char empty_json[] = "{\"records\":[]}";

    if (buffer == NULL || buffer_size == 0)
    {
        return ESP_ERR_INVALID_ARG;
    }

    if (buffer_size < sizeof(empty_json))
    {
        return ESP_ERR_INVALID_SIZE;
    }

    memcpy(buffer, empty_json, sizeof(empty_json));
    if (out_length != NULL)
    {
        *out_length = sizeof(empty_json) - 1U;
    }
    return ESP_OK;
}

esp_err_t nvs_storage_accumulate_focus_minutes(uint16_t minutes)
{
    portENTER_CRITICAL(&s_nvs_storage_lock);
    if (!s_nvs_storage_state.initialized)
    {
        portEXIT_CRITICAL(&s_nvs_storage_lock);
        return ESP_ERR_INVALID_STATE;
    }
    s_nvs_storage_state.totals.focus_minutes += minutes;
    portEXIT_CRITICAL(&s_nvs_storage_lock);
    return ESP_OK;
}

esp_err_t nvs_storage_accumulate_rest_minutes(uint16_t minutes)
{
    portENTER_CRITICAL(&s_nvs_storage_lock);
    if (!s_nvs_storage_state.initialized)
    {
        portEXIT_CRITICAL(&s_nvs_storage_lock);
        return ESP_ERR_INVALID_STATE;
    }
    s_nvs_storage_state.totals.rest_minutes += minutes;
    portEXIT_CRITICAL(&s_nvs_storage_lock);
    return ESP_OK;
}

esp_err_t nvs_storage_increment_focus_count(void)
{
    portENTER_CRITICAL(&s_nvs_storage_lock);
    if (!s_nvs_storage_state.initialized)
    {
        portEXIT_CRITICAL(&s_nvs_storage_lock);
        return ESP_ERR_INVALID_STATE;
    }
    s_nvs_storage_state.totals.focus_count++;
    portEXIT_CRITICAL(&s_nvs_storage_lock);
    return ESP_OK;
}

esp_err_t nvs_storage_increment_nap_count(void)
{
    portENTER_CRITICAL(&s_nvs_storage_lock);
    if (!s_nvs_storage_state.initialized)
    {
        portEXIT_CRITICAL(&s_nvs_storage_lock);
        return ESP_ERR_INVALID_STATE;
    }
    s_nvs_storage_state.totals.nap_count++;
    portEXIT_CRITICAL(&s_nvs_storage_lock);
    return ESP_OK;
}

esp_err_t nvs_storage_reset_daily_counters(void)
{
    portENTER_CRITICAL(&s_nvs_storage_lock);
    if (!s_nvs_storage_state.initialized)
    {
        portEXIT_CRITICAL(&s_nvs_storage_lock);
        return ESP_ERR_INVALID_STATE;
    }
    memset(&s_nvs_storage_state.totals, 0, sizeof(s_nvs_storage_state.totals));
    portEXIT_CRITICAL(&s_nvs_storage_lock);
    return ESP_OK;
}

esp_err_t nvs_storage_get_daily_totals(nvs_storage_daily_totals_t *totals)
{
    if (totals == NULL)
    {
        return ESP_ERR_INVALID_ARG;
    }

    portENTER_CRITICAL(&s_nvs_storage_lock);
    if (!s_nvs_storage_state.initialized)
    {
        portEXIT_CRITICAL(&s_nvs_storage_lock);
        return ESP_ERR_INVALID_STATE;
    }
    *totals = s_nvs_storage_state.totals;
    portEXIT_CRITICAL(&s_nvs_storage_lock);
    return ESP_OK;
}