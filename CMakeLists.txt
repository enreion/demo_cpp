cmake_minimum_required(VERSION 3.12)
project(demo_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(demo_cpp main.cpp Creature.cpp Creature.h Vampire.cpp Vampire.h Wolfman.cpp Wolfman.h)