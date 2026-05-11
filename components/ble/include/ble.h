#pragma once

#include <stdbool.h>
#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize BLE stack (NimBLE), register GATT services, and prepare for advertising.
 *        Must be called after nvs_flash_init() and nvs_storage_init().
 */
esp_err_t ble_init(void);

/**
 * @brief Start BLE advertising (undirected connectable, general discoverable).
 */
esp_err_t ble_start_advertising(void);

/**
 * @brief Stop BLE advertising.
 */
esp_err_t ble_stop(void);

/**
 * @brief Check if a BLE central is currently connected.
 */
bool ble_is_connected(void);

#ifdef __cplusplus
}
#endif
