cmake_minimum_required(VERSION 3.16)
project(Module01)

set(CMAKE_CXX_STANDARD 17)

add_executable(Module01 main.cpp
        Car.cpp
        Car.h
        SportsCar.cpp
        SportsCar.h)
