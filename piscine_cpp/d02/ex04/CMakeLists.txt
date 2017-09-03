cmake_minimum_required(VERSION 3.6)
project(ex04)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Fixed.h Fixed.cpp)
add_executable(ex04 ${SOURCE_FILES})