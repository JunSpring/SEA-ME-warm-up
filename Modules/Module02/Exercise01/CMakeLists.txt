cmake_minimum_required(VERSION 3.16)
project(Exercise01)

set(CMAKE_CXX_STANDARD 17)

add_executable(Exercise01 main.cpp
        Part.cpp
        Part.h
        Parts.cpp
        Parts.h
        Car.cpp
        Car.h)
