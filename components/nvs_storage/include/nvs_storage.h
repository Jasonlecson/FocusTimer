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

/**
 * @brief 词汇学习进度结构体（紧凑二进制格式）
 * @note 每个词 2 字节，2078 词共 ~4 KB
 */
typedef struct __attribute__((packed))
{
    uint8_t level;        /**< 学习等级 (0=新词, 1=学习中, 2=熟悉, 3=掌握) */
    uint8_t review_day;   /**< 距上次复习的天数 */
} nvs_storage_vocab_progress_t;

/**
 * @brief 加载词汇学习进度
 * @param progress 输出缓冲区，大小至少为 word_count 个 nvs_storage_vocab_progress_t
 * @param word_count 词库单词总数
 * @return ESP_OK 成功，ESP_ERR_NVS_NOT_FOUND 无存储数据（首次使用）
 */
esp_err_t nvs_storage_load_vocab_progress(nvs_storage_vocab_progress_t *progress, uint32_t word_count);

/**
 * @brief 保存词汇学习进度
 * @param progress 进度数据数组
 * @param word_count 词库单词总数
 * @return ESP_OK 成功
 */
esp_err_t nvs_storage_save_vocab_progress(const nvs_storage_vocab_progress_t *progress, uint32_t word_count);

#ifdef __cplusplus
}
#endif