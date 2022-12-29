cmake_minimum_required(VERSION 3.16)

project(website C CXX)

set(cpp_src src/main.cpp)

add_executable(website ${cpp_src})
set(CMAKE_CXX_FLAGS "-fpic -pthread")
add_link_options(-pthread)

target_link_libraries(website link)
