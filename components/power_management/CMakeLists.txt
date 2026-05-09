idf_component_register(SRCS "power_management.c"
                    REQUIRES esp_pm nvs_flash aw32001 battery esp_timer
                    INCLUDE_DIRS "include")
