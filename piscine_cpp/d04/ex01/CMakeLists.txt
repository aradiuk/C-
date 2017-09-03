cmake_minimum_required(VERSION 3.6)
project(ex01)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp AWeapon.cpp AWeapon.h PlasmaRifle.cpp PlasmaRifle.h PowerFist.cpp PowerFist.h Enemy.cpp Enemy.h SuperMutant.cpp SuperMutant.h RadScorpion.cpp RadScorpion.h Character.cpp Character.h)
add_executable(ex01 ${SOURCE_FILES})