
idf_component_register(INCLUDE_DIRS "include"
                        PRIV_REQUIRES 
                        esp_timer 
                        nvs_flash
                        sdspi
                        max98357
                        st7305_2p9
                        lvgl_user
                        lvgl
                       SRCS "sys_init.c")
