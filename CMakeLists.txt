cmake_minimum_required(VERSION 3.16)

project(website C CXX)

include_directories(/usr/local/include)
include_directories(/opt/homebrew/opt/openssl@3/include)

set(cpp_src src/main.cpp)

link_directories(/usr/lib)

add_executable(website ${cpp_src})
target_compile_features(website PUBLIC cxx_std_17)
set(CMAKE_CXX_FLAGS "-fpic -pthread")
set(CMAKE_EXE_LINKER_FLAGS "-L/usr/local/lib/")
set (CMAKE_CXX_FLAGS "-std=c++17")

target_link_libraries(website PRIVATE link)
