cmake_minimum_required(VERSION 3.6)
project(ex04)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp IMiningLaser.cpp IMiningLaser.h IAsteroid.cpp IAsteroid.h DeepCoreMiner.cpp DeepCoreMiner.h StripMiner.cpp StripMiner.h AsteroBocal.cpp AsteroBocal.h BocalSteroid.cpp BocalSteroid.h MiningBarge.cpp MiningBarge.h)
add_executable(ex04 ${SOURCE_FILES})