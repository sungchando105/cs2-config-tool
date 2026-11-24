cmake_minimum_required(VERSION 3.16)
project(cs2-config-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cs2configtool
    src/main.cpp
    src/configs.cpp
    src/tuner.cpp
    src/monitor.cpp
    src/cli.cpp
    src/utils.cpp
)

target_include_directories(cs2configtool PRIVATE include)

if(WIN32)
    target_link_libraries(cs2configtool PRIVATE userenv)
endif()
