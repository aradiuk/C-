cmake_minimum_required(VERSION 3.6)
project(ex02)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp FragTrap.h FragTrap.cpp ScavTrap.cpp ScavTrap.h ClapTrap.cpp ClapTrap.h)
add_executable(ex02 ${SOURCE_FILES})