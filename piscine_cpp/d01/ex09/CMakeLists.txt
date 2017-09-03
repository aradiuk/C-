cmake_minimum_required(VERSION 3.6)
project(ex09)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Logger.cpp Logger.h)
add_executable(ex09 ${SOURCE_FILES})