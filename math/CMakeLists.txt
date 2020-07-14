# set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(math LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.54 REQUIRED COMPONENTS date_time)

add_executable(math_constants math_constants.cpp)

add_executable(integer integer.cpp)

add_executable(rational rational.cpp)

add_executable(ratio ratio.cpp)

add_executable(crc crc.cpp)

add_executable(random random.cpp)