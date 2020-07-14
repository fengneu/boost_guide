# set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(algorithm LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.54 REQUIRED COMPONENTS date_time)

add_executable(foreach foreach.cpp)

add_executable(minmax minmax.cpp)

add_executable(minmax_element minmax_element.cpp)

add_executable(clamp clamp.cpp)

add_executable(hex hex.cpp)