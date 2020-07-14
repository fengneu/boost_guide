# set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(container LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.54 REQUIRED COMPONENTS date_time)

add_executable(array array.cpp)

add_executable(dynamic_bitset dynamic_bitset.cpp)

add_executable(unordered unordered.cpp)

add_executable(bimap bimap.cpp)

add_executable(circular_buffer circular_buffer.cpp)

add_executable(tuple tuple.cpp)

add_executable(any any.cpp)

add_executable(variant variant.cpp)

#add_executable(variant2 variant2.cpp)

add_executable(multi_array multi_array.cpp)

add_executable(property_tree property_tree.cpp)

add_custom_target(config ALL
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/conf.json ${CMAKE_CURRENT_BINARY_DIR}/conf.json
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/conf.xml ${CMAKE_CURRENT_BINARY_DIR}/conf.xml
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})