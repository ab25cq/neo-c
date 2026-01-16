cmake_minimum_required(VERSION 3.13)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(hello C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(minux2
    main_.c
)

target_link_libraries(minux2 pico_stdlib)

# USBシリアル有効
pico_enable_stdio_usb(minux2 1)
pico_enable_stdio_uart(minux2 0)

pico_add_extra_outputs(minux2)

