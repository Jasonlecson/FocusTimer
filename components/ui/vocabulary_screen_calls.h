#pragma once

/**
 * @file vocabulary_screen_calls.h
 * @brief 单词背诵屏幕业务逻辑
 */

#include "esp_err.h"

/**
 * @brief 初始化词汇学习模块（加载进度从 NVS）
 * @return ESP_OK 成功
 */
esp_err_t vocabulary_init(void);

/**
 * @brief 开始词汇学习会话（屏幕加载时调用）
 */
void vocabulary_screen_start_session(void);

/**
 * @brief 结束词汇学习会话（屏幕卸载时调用，自动保存进度）
 */
void vocabulary_screen_stop_session(void);

/**
 * @brief 用户选择"认识"当前单词
 */
void vocabulary_answer_known(void);

/**
 * @brief 用户选择"不认识"当前单词
 */
void vocabulary_answer_unknown(void);

/**
 * @brief 翻转显示/隐藏释义
 */
void vocabulary_toggle_meaning(void);
