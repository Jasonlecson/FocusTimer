idf_component_register(SRCS "power_management.c"
                    REQUIRES esp_pm nvs_flash esp_timer driver pinmap
                    INCLUDE_DIRS "include")
