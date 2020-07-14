# set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(os LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.54 REQUIRED COMPONENTS system)
find_package(Boost 1.54 REQUIRED COMPONENTS chrono)
find_package(Boost 1.54 REQUIRED COMPONENTS timer)
find_package(Boost 1.54 REQUIRED COMPONENTS filesystem)
find_package(Boost 1.54 REQUIRED COMPONENTS program_options)

add_executable(system system.cpp)
target_link_libraries(system
        PRIVATE
        Boost::system)


add_executable(chrono chrono.cpp)
target_link_libraries(chrono
        PRIVATE
        Boost::chrono)


add_executable(cpu_timer cpu_timer.cpp)
target_link_libraries(cpu_timer
        PRIVATE
        Boost::timer)


add_executable(filesystem1 filesystem1.cpp)
target_link_libraries(filesystem1
        PRIVATE
        Boost::filesystem)


add_executable(filesystem2 filesystem2.cpp)
target_link_libraries(filesystem2
        PRIVATE
        Boost::filesystem)


add_executable(program_options program_options.cpp)
target_link_libraries(program_options
        PRIVATE
        Boost::program_options)

add_custom_target(config ALL
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/config.ini ${CMAKE_CURRENT_BINARY_DIR}/config.ini
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
