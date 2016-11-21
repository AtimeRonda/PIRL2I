cmake_minimum_required(VERSION 3.6)
project(PIR)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp System.cpp System.h)
add_executable(PIR ${SOURCE_FILES})