cmake_minimum_required(VERSION 3.15)
project(shape)

set(CMAKE_CXX_STANDARD 14)

add_executable(shape main.cpp Shape.h Rectangle.cpp Rectangle.h)
