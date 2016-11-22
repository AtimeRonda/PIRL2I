cmake_minimum_required(VERSION 3.6)
project(PIR)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp System.cpp System.h Plane.cpp Plane.h Checklist.cpp Checklist.h Pilot_Action.cpp Pilot_Action.h Configurator.cpp main.h)
add_executable(PIR ${SOURCE_FILES})