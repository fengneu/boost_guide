# set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(string LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.54 REQUIRED COMPONENTS date_time)


add_executable(lexical_cast lexical_cast.cpp)

add_executable(format format.cpp)

add_executable(string_ref string_ref.cpp)

add_executable(string_algo string_algo.cpp)

add_executable(tokenizer tokenizer.cpp)

add_executable(xpressive xpressive.cpp)