# set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(os LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.54 REQUIRED COMPONENTS system)
add_executable(ref ref.cpp)

add_executable(bind bind.cpp)

add_executable(function1 function1.cpp)

add_executable(function2 function2.cpp)

add_executable(signals1 signals1.cpp)

add_executable(signals2 signals2.cpp)

add_executable(result_of result_of.cpp)

