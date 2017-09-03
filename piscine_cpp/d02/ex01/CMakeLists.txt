cmake_minimum_required(VERSION 3.6)
project(ex01)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Fixed.cpp Fixed.h)
add_executable(ex01 ${SOURCE_FILES})