#pragma once

#include <stdbool.h>
#include <stdint.h>
#include "esp_err.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @brief 初始化电源管理模块
 *
 * - 从 NVS 读取持久化配置（低功耗模式、自动休眠、充电阈值）
 * - 若 NVS 无记录则使用默认值：低功耗=false, 自动休眠=false, 充电阈值=90
 * - 若低功耗模式已启用，则立即调用 esp_pm_configure
 * - 创建 1 秒周期定时器用于空闲检测
 */
esp_err_t power_management_init(void);

/* ---- 低功耗模式（auto light sleep）---- */

esp_err_t power_management_set_auto_lightsleep(bool enable);
bool power_management_get_auto_lightsleep(void);

/* ---- 自动休眠 ---- */

esp_err_t power_management_set_auto_sleep(bool enable);
bool power_management_get_auto_sleep(void);

/* ---- 充电阈值 ---- */

esp_err_t power_management_set_charge_threshold(uint8_t threshold);
uint8_t power_management_get_charge_threshold(void);

/* ---- 空闲计时器 ---- */

/**
 * @brief 重置空闲计时器（用户有操作时调用）
 */
void power_management_reset_idle_timer(void);

/* ---- Deep sleep / Wakeup ---- */

/**
 * @brief 是否从 deep sleep 唤醒（timer wakeup）
 */
bool power_management_is_wakeup_from_sleep(void);

/**
 * @brief 主动进入 deep sleep（60 秒后定时唤醒）
 */
void power_management_enter_deepsleep(void);

#ifdef __cplusplus
}
#endif
