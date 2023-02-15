cmake_minimum_required(VERSION 3.0.0)
project(qwert VERSION 0.1.0)

add_library(rational rational.cpp rational.h)
add_executable(qwert test.cpp)

target_link_libraries(qwert rational)