# set minimum cmake version

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(concurrency LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.54 REQUIRED COMPONENTS thread)
find_package(Boost 1.54 REQUIRED COMPONENTS system)
find_package(Boost 1.54 REQUIRED COMPONENTS atomic)
find_package(Boost 1.54 REQUIRED COMPONENTS chrono)
find_package(Boost 1.54 REQUIRED COMPONENTS coroutine)

add_executable(atomic atomic.cpp)

add_executable(thread1 thread1.cpp)
target_link_libraries(thread1
        PRIVATE
        Boost::thread)

add_executable(mutex mutex.cpp)
target_link_libraries(mutex
        PRIVATE
        Boost::thread)

add_executable(thread2 thread2.cpp)
target_link_libraries(thread2
        PRIVATE
        Boost::thread)

add_executable(asio asio.cpp)
target_link_libraries(asio
        PRIVATE
        pthread
        Boost::atomic
        Boost::system
        Boost::chrono)


add_executable(server1 server1.cpp)
target_link_libraries(server1
        PRIVATE
        pthread
        Boost::atomic
        Boost::system)

add_executable(server2 server2.cpp)
target_link_libraries(server2
        PRIVATE
        pthread
        Boost::atomic
        Boost::system)



add_executable(client1 client1.cpp)
target_link_libraries(client1
        PRIVATE
        pthread
        Boost::atomic
        Boost::system)

add_dependencies(client1 server1)

add_executable(client2 client2.cpp)
target_link_libraries(client2
        PRIVATE
        pthread
        Boost::atomic
        Boost::system)
add_dependencies(client2 server2)


add_executable(timer timer.cpp)
target_link_libraries(timer
        PRIVATE
        pthread
        Boost::system
        Boost::chrono)

add_executable(udp_server udp_server.cpp)
target_link_libraries(udp_server
        PRIVATE
        pthread
        Boost::system)

add_executable(udp_client udp_client.cpp)
target_link_libraries(udp_client
        PRIVATE
        pthread
        Boost::system)

add_dependencies(udp_client udp_server)


add_executable(stream_server stream_server.cpp)
target_link_libraries(stream_server
        PRIVATE
        pthread
        Boost::system)

add_executable(stream_client stream_client.cpp)
target_link_libraries(stream_client
        PRIVATE
        pthread
        Boost::system)

add_dependencies(udp_client udp_server)


add_executable(signal_set signal_set.cpp)
target_link_libraries(signal_set
        PRIVATE
        pthread
        Boost::atomic
        Boost::system)

add_executable(coroutine coroutine.cpp)
target_link_libraries(coroutine
        PRIVATE
        Boost::coroutine)

add_executable(descriptor descriptor)
target_link_libraries(descriptor
        PRIVATE
        Boost::coroutine)



