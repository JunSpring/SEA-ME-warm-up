cmake_minimum_required(VERSION 3.16)
project(Exercise03)

set(CMAKE_CXX_STANDARD 17)

add_executable(phonebook main.cpp
        Contact.cpp
        Contact.h
        Phonebook.cpp
        Phonebook.h)
