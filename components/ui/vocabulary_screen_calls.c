/**
 * @file vocabulary_screen_calls.c
 * @brief 单词背诵屏幕业务逻辑
 *
 * 实现艾宾浩斯遗忘曲线间隔复习算法：
 * - Level 0: 新词（从未学习）
 * - Level 1: 学习中（复习间隔 1 天）
 * - Level 2: 熟悉（复习间隔 3 天）
 * - Level 3: 掌握（复习间隔 7 天）
 *
 * 每次学习会话 20 个词，优先复习到期词 + 新词补充。
 */

#include "vocabulary_screen_calls.h"

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "cet6_vocabulary.h"
#include "esp_log.h"
#include "lvgl.h"
#include "lvgl_indev.h"
#include "lvgl_user.h"
#include "nvs.h"
#include "nvs_storage.h"
#include "pcf85263a.h"
#include "screens.h"

static const char *TAG = "vocab";

/* ========== 常量定义 ========== */

#define VocabSessionMaxWords 20     /**< 每次学习会话最大单词数 */
#define VocabLevelMax        3      /**< 最大学习等级 */
#define VocabReviewInterval1 1      /**< Level 1 复习间隔（天） */
#define VocabReviewInterval2 3      /**< Level 2 复习间隔（天） */
#define VocabReviewInterval3 7      /**< Level 3 复习间隔（天） */

/* ========== 学习会话状态 ========== */

typedef struct
{
    uint16_t words[VocabSessionMaxWords]; /**< 本次学习的单词索引 */
    uint8_t  count;                       /**< 本次学习总数 */
    uint8_t  current;                     /**< 当前单词序号 (0-based) */
    uint16_t known_count;                 /**< 认识数量 */
    uint16_t unknown_count;               /**< 不认识数量 */
    bool     showing_meaning;             /**< 是否显示释义 */
    bool     session_active;              /**< 会话是否活跃 */
} vocab_session_t;

/* ========== 模块静态数据 ========== */

static nvs_storage_vocab_progress_t s_progress[CET6_WORD_COUNT]; /**< 学习进度数组 (~4 KB) */
static bool s_progress_loaded = false;                            /**< 进度是否已加载 */
static vocab_session_t s_session;                                 /**< 当前学习会话 */
static uint32_t s_day_counter = 0;                               /**< 天计数器（用于复习间隔判断） */

/* ========== 内部辅助函数 ========== */

/**
 * @brief 获取当前日期的天计数器
 * @return 自某个基准日起的天数
 */
static uint32_t vocab_get_current_day(void)
{
    pcf85263a_handle_t handle = pcf85263a_get_handle();
    if (handle == NULL)
    {
        return s_day_counter;
    }

    pcf85263a_datetime_t dt = {0};
    if (pcf85263a_get_datetime(handle, &dt) != ESP_OK)
    {
        return s_day_counter;
    }

    /* 简单的日期转天数：年×365 + 月×30 + 日 */
    return (uint32_t)dt.year * 365 + (uint32_t)dt.month * 30 + (uint32_t)dt.day;
}

/**
 * @brief 获取指定等级的复习间隔天数
 */
static uint8_t vocab_get_review_interval(uint8_t level)
{
    switch (level)
    {
        case 1:  return VocabReviewInterval1;
        case 2:  return VocabReviewInterval2;
        case 3:  return VocabReviewInterval3;
        default: return 0;
    }
}

/**
 * @brief 判断指定单词是否到期需要复习
 */
static bool vocab_is_due_for_review(uint32_t index)
{
    if (index >= CET6_WORD_COUNT)
    {
        return false;
    }

    uint8_t level = s_progress[index].level;
    if (level == 0 || level > VocabLevelMax)
    {
        return false;
    }

    uint8_t interval = vocab_get_review_interval(level);
    return s_progress[index].review_day >= interval;
}

/**
 * @brief 收集新词索引（level == 0）
 * @param[out] output 输出数组
 * @param max_count 最大收集数量
 * @return 实际收集数量
 */
static uint16_t vocab_collect_new_words(uint16_t *output, uint16_t max_count)
{
    uint16_t count = 0;
    for (uint32_t i = 0; i < CET6_WORD_COUNT && count < max_count; i++)
    {
        if (s_progress[i].level == 0)
        {
            output[count++] = (uint16_t)i;
        }
    }
    return count;
}

/**
 * @brief 收集到期复习词索引
 * @param[out] output 输出数组
 * @param max_count 最大收集数量
 * @return 实际收集数量
 */
static uint16_t vocab_collect_review_words(uint16_t *output, uint16_t max_count)
{
    uint16_t count = 0;
    for (uint32_t i = 0; i < CET6_WORD_COUNT && count < max_count; i++)
    {
        if (vocab_is_due_for_review(i))
        {
            output[count++] = (uint16_t)i;
        }
    }
    return count;
}

/**
 * @brief 简单的 Fisher-Yates 洗牌
 */
static void vocab_shuffle(uint16_t *array, uint16_t count)
{
    for (uint16_t i = count - 1; i > 0; i--)
    {
        /* 简单伪随机：利用 RTC 秒数作为种子偏移 */
        uint16_t j = (uint16_t)((s_day_counter + i * 7) % (i + 1));
        uint16_t temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

/**
 * @brief 构建学习会话（选词算法）
 */
static void vocab_build_session(void)
{
    memset(&s_session, 0, sizeof(s_session));

    uint16_t temp_words[VocabSessionMaxWords];
    uint16_t total = 0;

    /* 优先收集到期复习词 */
    uint16_t review_count = vocab_collect_review_words(temp_words, VocabSessionMaxWords);
    total += review_count;

    /* 补充新词 */
    if (total < VocabSessionMaxWords)
    {
        uint16_t new_count = vocab_collect_new_words(
            temp_words + total,
            VocabSessionMaxWords - total);
        total += new_count;
    }

    if (total == 0)
    {
        ESP_LOGI(TAG, "no words to study");
        s_session.session_active = false;
        return;
    }

    /* 洗牌 */
    vocab_shuffle(temp_words, total);

    /* 复制到会话 */
    s_session.count = total;
    memcpy(s_session.words, temp_words, total * sizeof(uint16_t));
    s_session.current = 0;
    s_session.known_count = 0;
    s_session.unknown_count = 0;
    s_session.showing_meaning = false;
    s_session.session_active = true;

    ESP_LOGI(TAG, "session built: %u words (%u review + %u new)",
             total, review_count, total - review_count);
}

/**
 * @brief 显示当前单词到 UI
 */
static void vocab_update_ui(void)
{
    if (!s_session.session_active || s_session.current >= s_session.count)
    {
        return;
    }

    uint16_t word_index = s_session.words[s_session.current];
    const word_entry_t *word = cet6_get_word_by_index(word_index);
    if (word == NULL)
    {
        return;
    }

    _lock_acquire(&lvgl_api_lock);

    /* 更新单词 */
    if (objects.vocabulary_scr_word_label != NULL)
    {
        lv_label_set_text(objects.vocabulary_scr_word_label, word->word);
    }

    /* 更新音标 */
    if (objects.vocabulary_scr_phonetic_label != NULL)
    {
        char phonetic_buf[64];
        snprintf(phonetic_buf, sizeof(phonetic_buf), "%s / %s",
                 word->phonetic_us ? word->phonetic_us : "",
                 word->phonetic_uk ? word->phonetic_uk : "");
        lv_label_set_text(objects.vocabulary_scr_phonetic_label, phonetic_buf);
    }

    /* 更新释义（根据翻转状态） */
    if (objects.vocabulary_scr_meaning_label != NULL)
    {
        if (s_session.showing_meaning)
        {
            lv_label_set_text(objects.vocabulary_scr_meaning_label, word->meaning);
        }
        else
        {
            lv_label_set_text(objects.vocabulary_scr_meaning_label, "触摸显示释义");
        }
    }

    /* 更新例句 */
    if (objects.vocabulary_scr_example_label != NULL)
    {
        if (s_session.showing_meaning && word->example != NULL)
        {
            lv_label_set_text(objects.vocabulary_scr_example_label, word->example);
        }
        else
        {
            lv_label_set_text(objects.vocabulary_scr_example_label, "");
        }
    }

    /* 更新进度 */
    if (objects.vocabulary_scr_progress_label != NULL)
    {
        char progress_buf[32];
        snprintf(progress_buf, sizeof(progress_buf), "%u/%u",
                 s_session.current + 1, s_session.count);
        lv_label_set_text(objects.vocabulary_scr_progress_label, progress_buf);
    }

    /* 更新新词计数 */
    if (objects.vocabulary_scr_count_label != NULL)
    {
        char count_buf[32];
        uint16_t new_count = 0;
        for (uint32_t i = 0; i < CET6_WORD_COUNT; i++)
        {
            if (s_progress[i].level == 0)
            {
                new_count++;
            }
        }
        snprintf(count_buf, sizeof(count_buf), "新词:%u", new_count);
        lv_label_set_text(objects.vocabulary_scr_count_label, count_buf);
    }

    _lock_release(&lvgl_api_lock);
}

/**
 * @brief 显示学习完成统计
 */
static void vocab_show_completion(void)
{
    s_session.session_active = false;

    _lock_acquire(&lvgl_api_lock);

    if (objects.vocabulary_scr_word_label != NULL)
    {
        lv_label_set_text(objects.vocabulary_scr_word_label, "学习完成!");
    }

    if (objects.vocabulary_scr_phonetic_label != NULL)
    {
        lv_label_set_text(objects.vocabulary_scr_phonetic_label, "");
    }

    if (objects.vocabulary_scr_meaning_label != NULL)
    {
        char buf[64];
        snprintf(buf, sizeof(buf), "认识: %u  不认识: %u",
                 s_session.known_count, s_session.unknown_count);
        lv_label_set_text(objects.vocabulary_scr_meaning_label, buf);
    }

    if (objects.vocabulary_scr_example_label != NULL)
    {
        lv_label_set_text(objects.vocabulary_scr_example_label, "");
    }

    if (objects.vocabulary_scr_progress_label != NULL)
    {
        lv_label_set_text(objects.vocabulary_scr_progress_label, "完成");
    }

    _lock_release(&lvgl_api_lock);
}

/* ========== 长按中键返回回调 ========== */

static void vocabulary_long_press_cb(void)
{
    _lock_acquire(&lvgl_api_lock);
    lv_screen_load_anim(objects.main, LV_SCREEN_LOAD_ANIM_MOVE_RIGHT, 200, 0, false);
    _lock_release(&lvgl_api_lock);
}

/* ========== 公共 API 实现 ========== */

esp_err_t vocabulary_init(void)
{
    memset(s_progress, 0, sizeof(s_progress));

    esp_err_t err = nvs_storage_load_vocab_progress(s_progress, CET6_WORD_COUNT);
    if (err == ESP_ERR_NVS_NOT_FOUND)
    {
        /* 首次使用，全部为新词，不需要保存 */
        ESP_LOGI(TAG, "initialized with all new words");
        s_progress_loaded = true;
        return ESP_OK;
    }
    else if (err != ESP_OK)
    {
        ESP_LOGE(TAG, "load progress failed: %s", esp_err_to_name(err));
        return err;
    }

    s_progress_loaded = true;

    /* 统计各级别单词数 */
    uint16_t counts[4] = {0};
    for (uint32_t i = 0; i < CET6_WORD_COUNT; i++)
    {
        if (s_progress[i].level <= 3)
        {
            counts[s_progress[i].level]++;
        }
    }
    ESP_LOGI(TAG, "progress loaded: new=%u learning=%u familiar=%u mastered=%u",
             counts[0], counts[1], counts[2], counts[3]);

    return ESP_OK;
}

void vocabulary_screen_start_session(void)
{
    if (!s_progress_loaded)
    {
        vocabulary_init();
    }

    /* 注册长按中键返回回调 */
    lvgl_indev_register_long_press_cb(vocabulary_long_press_cb);

    /* 注册左右键直接动作：左键=不认识，右键=认识 */
    lvgl_indev_set_lr_action_screen(objects.vocabulary,
                                    vocabulary_answer_unknown,
                                    vocabulary_answer_known);

    /* 更新天计数器 */
    s_day_counter = vocab_get_current_day();

    /* 所有单词的 review_day +1（模拟每天+1，实际由天计数器控制） */
    /* 这里不做 +1，而是在判断时用天数差 */

    /* 构建学习会话 */
    vocab_build_session();

    if (s_session.session_active)
    {
        vocab_update_ui();
    }
    else
    {
        vocab_show_completion();
    }
}

void vocabulary_screen_stop_session(void)
{
    /* 注销长按中键返回回调 */
    lvgl_indev_register_long_press_cb(NULL);

    /* 注销左右键直接动作 */
    lvgl_indev_set_lr_action_screen(NULL, NULL, NULL);

    if (s_progress_loaded)
    {
        nvs_storage_save_vocab_progress(s_progress, CET6_WORD_COUNT);
        ESP_LOGI(TAG, "progress saved");
    }

    s_session.session_active = false;
}

void vocabulary_answer_known(void)
{
    if (!s_session.session_active || s_session.current >= s_session.count)
    {
        return;
    }

    uint16_t word_index = s_session.words[s_session.current];

    /* 等级 +1（不超过最大值） */
    if (s_progress[word_index].level < VocabLevelMax)
    {
        s_progress[word_index].level++;
    }
    s_progress[word_index].review_day = 0;
    s_session.known_count++;

    /* 下一词 */
    s_session.current++;
    s_session.showing_meaning = false;

    if (s_session.current >= s_session.count)
    {
        /* 保存进度并显示完成 */
        nvs_storage_save_vocab_progress(s_progress, CET6_WORD_COUNT);
        vocab_show_completion();
    }
    else
    {
        vocab_update_ui();
    }
}

void vocabulary_answer_unknown(void)
{
    if (!s_session.session_active || s_session.current >= s_session.count)
    {
        return;
    }

    uint16_t word_index = s_session.words[s_session.current];

    /* 等级重置为 1（学习中） */
    s_progress[word_index].level = 1;
    s_progress[word_index].review_day = 0;
    s_session.unknown_count++;

    /* 下一词 */
    s_session.current++;
    s_session.showing_meaning = false;

    if (s_session.current >= s_session.count)
    {
        /* 保存进度并显示完成 */
        nvs_storage_save_vocab_progress(s_progress, CET6_WORD_COUNT);
        vocab_show_completion();
    }
    else
    {
        vocab_update_ui();
    }
}

void vocabulary_toggle_meaning(void)
{
    s_session.showing_meaning = !s_session.showing_meaning;
    vocab_update_ui();
}
