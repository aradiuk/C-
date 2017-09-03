cmake_minimum_required(VERSION 3.6)
project(ex08)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Human.cpp Human.h)
add_executable(ex08 ${SOURCE_FILES})