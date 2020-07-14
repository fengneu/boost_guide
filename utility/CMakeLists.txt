# set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(utility LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.54 REQUIRED COMPONENTS date_time)

add_executable(noncopyable noncopyable.cpp)

add_executable(ignore_unused ignore_unused.cpp)

add_executable(optional optional.cpp)

add_executable(assign assign.cpp)

add_executable(tribool tribool.cpp)

add_executable(swap swap.cpp)

add_executable(singleton singleton.cpp)

add_executable(operators operators.cpp)

add_executable(exception exception.cpp)

add_executable(uuid  uuid.cpp)

add_executable(config config.cpp)

add_executable(utility utility.cpp)