# set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(test LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.54 REQUIRED COMPONENTS unit_test_framework)


add_executable(assert assert.cpp)

add_executable(static_assert static_assert.cpp)

add_executable(lightweight_test lightweight_test.cpp)

add_executable(minimal_test minimal_test.cpp)

add_executable(utf_test utf_test.cpp)
target_link_libraries(utf_test
        PUBLIC
        Boost::unit_test_framework )
target_compile_definitions(utf_test
        PRIVATE
        BOOST_TEST_DYN_LINK
        )

add_executable(decorator decorator.cpp)
target_link_libraries(decorator
        PUBLIC
        Boost::unit_test_framework )
target_compile_definitions(decorator
        PRIVATE
        BOOST_TEST_DYN_LINK
        )

add_executable(execution_monitor execution_monitor.cpp)
target_link_libraries(execution_monitor
        PUBLIC
        Boost::unit_test_framework )
target_compile_definitions(execution_monitor
        PRIVATE
        BOOST_TEST_DYN_LINK
        )

add_executable(fixture_main fixture_main.cpp)
target_link_libraries(fixture_main
        PUBLIC
        Boost::unit_test_framework )

target_compile_definitions(fixture_main
        PRIVATE
        BOOST_TEST_DYN_LINK
        )


add_executable(fixture_test fixture_main.cpp fixture_test.cpp)
target_link_libraries(fixture_test
        PUBLIC
        Boost::unit_test_framework )

target_compile_definitions(fixture_test
        PRIVATE
        BOOST_TEST_DYN_LINK
        )
