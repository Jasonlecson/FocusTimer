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
 * @brief Enable/disable BLE advertising and accepting connections.
 *
 * When disabled, advertising stops and any existing connection will be terminated.
 * When enabled, advertising starts (once the stack is synced).
 */
esp_err_t ble_set_advertising_enabled(bool enabled);

/**
 * @brief Returns whether advertising is currently enabled by user/UI policy.
 *
 * This is NOT the same as whether advertising is active at this exact moment.
 */
bool ble_is_advertising_enabled(void);

typedef void (*ble_connection_state_cb_t)(bool connected, void *arg);

/**
 * @brief Register a connection state callback.
 *
 * Only a single callback is supported; calling again replaces the previous one.
 */
void ble_register_connection_state_cb(ble_connection_state_cb_t cb, void *arg);

/**
 * @brief Check if a BLE central is currently connected.
 */
bool ble_is_connected(void);

#ifdef __cplusplus
}
#endif
