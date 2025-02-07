cmake_minimum_required(VERSION 3.0)

project(soldier)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O2 -Wall")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(soldier_cmake main.cpp src/Gun.cpp src/Soldier.cpp)