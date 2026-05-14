#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    uint16_t focus_minutes;
    uint16_t rest_minutes;
    uint8_t focus_count;
    uint8_t nap_count;
} nvs_storage_daily_totals_t;

esp_err_t nvs_storage_init(void);
esp_err_t nvs_storage_save_daily_record(void);
esp_err_t nvs_storage_sync_current_day(void);
esp_err_t nvs_storage_is_midnight(bool *is_midnight);
esp_err_t nvs_storage_get_records_json(char *buffer, size_t buffer_size, size_t *out_length);

esp_err_t nvs_storage_accumulate_focus_minutes(uint16_t minutes);
esp_err_t nvs_storage_accumulate_rest_minutes(uint16_t minutes);
esp_err_t nvs_storage_increment_focus_count(void);
esp_err_t nvs_storage_increment_nap_count(void);
esp_err_t nvs_storage_reset_daily_counters(void);
esp_err_t nvs_storage_get_daily_totals(nvs_storage_daily_totals_t *totals);
esp_err_t nvs_storage_get_tracked_date(char *date_buffer, size_t buffer_size);
esp_err_t nvs_storage_set_daily_counts(uint8_t focus_count, uint8_t nap_count);
esp_err_t nvs_storage_set_daily_minutes(uint16_t focus_minutes, uint16_t rest_minutes);

#ifdef __cplusplus
}
#endif