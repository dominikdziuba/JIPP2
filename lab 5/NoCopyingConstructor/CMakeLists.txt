cmake_minimum_required(VERSION 3.16)
project(point)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(point src/main.cpp src/Point.cpp)
