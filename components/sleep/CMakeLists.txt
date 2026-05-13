idf_component_register(SRCS "sleep.c"
                    REQUIRES nvs_flash nvs_storage pcf85263a power_management spi_shared_lock lvgl_user
                             st7305_2p9 battery stcc4 aw32001 aw96103 imu ble ui
                    PRIV_REQUIRES esp_lcd
                    INCLUDE_DIRS "include")
