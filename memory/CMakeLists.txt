# set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(memory LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.54 REQUIRED COMPONENTS date_time)

add_executable(scoped_ptr scoped_ptr.cpp)

add_executable(scoped_array scoped_array.cpp)

add_executable(shared_ptr1 shared_ptr1.cpp)

add_executable(shared_ptr2 shared_ptr2.cpp)

add_executable(shared_array shared_array.cpp)

add_executable(weak_ptr weak_ptr.cpp)

add_executable(intrusive_ptr intrusive_ptr.cpp)

add_executable(pool pool.cpp)




