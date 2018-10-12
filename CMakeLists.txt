cmake_minimum_required(VERSION 3.12)
project(Lab04)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab04 inheritance.cpp animal.hpp animal.cpp bird.hpp bird.cpp canine.hpp canine.cpp)