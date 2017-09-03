cmake_minimum_required(VERSION 3.6)
project(ex03)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp AMateria.cpp AMateria.h ICharacter.cpp ICharacter.h Ice.cpp Ice.h Cure.cpp Cure.h Character.cpp Character.h IMateriaSource.cpp IMateriaSource.h MateriaSource.cpp MateriaSource.h)
add_executable(ex03 ${SOURCE_FILES})