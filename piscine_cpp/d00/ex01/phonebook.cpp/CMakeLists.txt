cmake_minimum_required(VERSION 3.6)
project(phonebook_cpp)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp contact.cpp contact.h phonebook.cpp phonebook.h)
add_executable(phonebook_cpp ${SOURCE_FILES})