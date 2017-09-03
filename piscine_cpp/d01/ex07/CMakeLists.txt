cmake_minimum_required(VERSION 3.6)
project(ex07)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp File.cpp File.h)
add_executable(ex07 ${SOURCE_FILES})