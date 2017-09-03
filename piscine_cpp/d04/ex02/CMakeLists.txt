cmake_minimum_required(VERSION 3.6)
project(ex02)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ISquad.h ISpaceMarine.h Squad.cpp Squad.h TacticalMarine.cpp TacticalMarine.h AssaultTerminator.cpp AssaultTerminator.h ISquad.cpp ISpaceMarine.cpp)
add_executable(ex02 ${SOURCE_FILES})