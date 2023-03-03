cmake_minimum_required(VERSION 3.16)

project(website C CXX)

include_directories(/usr/local/include)

set(cpp_src src/main.cpp)

add_executable(website ${cpp_src})
target_compile_features(website PUBLIC cxx_std_17)
set(CMAKE_CXX_FLAGS "-fpic -pthread -L/usr/local/lib/")
add_link_options(-pthread)

target_link_libraries(website link)
