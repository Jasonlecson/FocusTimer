idf_component_register(
    SRCS "nvs_storage.c"
    INCLUDE_DIRS "include"
    REQUIRES nvs_flash json
    PRIV_REQUIRES pcf85263a
)