cmake_minimum_required(VERSION 3.12)
project(TESTING)
include_directories(algorithm)


set(SOURCE_LIB test.cpp)

add_library(test STATIC ${SOURCE_LIB})

target_link_libraries(test IsomorphismSource)