cmake_minimum_required(VERSION 3.6)
project(ex03)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ZombieHorde.cpp ZombieHorde.h Zombie.h Zombie.cpp)
add_executable(ex03 ${SOURCE_FILES})