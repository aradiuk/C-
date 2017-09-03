cmake_minimum_required(VERSION 3.6)
project(ex06)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Weapon.cpp Weapon.h HumanA.cpp HumanA.h HumanB.cpp HumanB.h)
add_executable(ex06 ${SOURCE_FILES})