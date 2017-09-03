cmake_minimum_required(VERSION 3.6)
project(ex00)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Sorcerer.cpp Sorcerer.h Victim.cpp Victim.h Peon.cpp Peon.h)
add_executable(ex00 ${SOURCE_FILES})