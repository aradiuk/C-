cmake_minimum_required(VERSION 3.6)
project(ex05)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Brain.cpp Brain.h Human.cpp Human.h)
add_executable(ex05 ${SOURCE_FILES})