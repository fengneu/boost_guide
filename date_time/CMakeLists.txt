# set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(date_time LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.54 REQUIRED COMPONENTS date_time)

add_executable(timer timer.cpp)
target_link_libraries(timer
        PRIVATE
        Boost::date_time)

add_executable(progress_timer progress_timer.cpp )
target_link_libraries(progress_timer
        PRIVATE
        Boost::date_time)

add_executable(progress_display progress_display.cpp )
target_link_libraries(progress_display
        PRIVATE
        Boost::date_time)

add_executable(date1 date1.cpp)
target_link_libraries(date1
        PRIVATE
        Boost::date_time)

add_executable(date2 date2.cpp)
target_link_libraries(date2
        PRIVATE
        Boost::date_time)

add_custom_target(date_time_zonespec ALL
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/date_time_zonespec.csv ${CMAKE_CURRENT_BINARY_DIR}/date_time_zonespec.csv
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

add_executable(datetime datetime.cpp)
target_link_libraries(datetime
        PRIVATE
        Boost::date_time)

add_executable(posix_time posix_time.cpp)
target_link_libraries(posix_time
        PRIVATE
        Boost::date_time)