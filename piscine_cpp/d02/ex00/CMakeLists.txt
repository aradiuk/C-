cmake_minimum_required(VERSION 3.6)
project(ex00)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Fixed.cpp Fixed.h)
add_executable(ex00 ${SOURCE_FILES})