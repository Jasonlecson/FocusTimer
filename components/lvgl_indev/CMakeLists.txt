idf_component_register(SRCS "lvgl_indev.c"
                    PRIV_REQUIRES esp_timer aw96103 lvgl_user power_management
                    INCLUDE_DIRS "include")
