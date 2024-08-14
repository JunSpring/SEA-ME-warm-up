cmake_minimum_required(VERSION 3.16)
project(Exercise00)

set(CMAKE_CXX_STANDARD 17)

add_executable(Exercise00 main.cpp
        Car.cpp
        Car.h
        SportsCar.cpp
        SportsCar.h)
