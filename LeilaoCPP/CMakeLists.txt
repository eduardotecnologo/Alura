cmake_minimum_required(VERSION 3.21)
project(LeilaoCPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(LeilaoCPP tests/main.cpp src/Avaliador.cpp src/Avaliador.h)
