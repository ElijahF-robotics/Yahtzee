cmake_minimum_required(VERSION 3.30)
project(Yahtzee)

set(CMAKE_CXX_STANDARD 20)

add_executable(Yahtzee main.cpp
        "Die Class/Die.h"
        Die.cpp
        Player.h
        Yahtzee.h
        Yahtzee.cpp)
