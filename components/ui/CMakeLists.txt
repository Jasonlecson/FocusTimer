file(GLOB_RECURSE UI_SRCS ./*.c ./*.cpp) 

idf_component_register(
    INCLUDE_DIRS "."
    SRCS ${UI_SRCS}
    REQUIRES
        lvgl
        lvgl_user
        pcf85263a
        stcc4
        battery
        nvs_storage
        power_management
        ble
        sdspi
        spi_shared_lock
        sys_init
        max98357
        imu
        nvs_flash
        driver
        lvgl_indev
)
