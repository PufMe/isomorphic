cmake_minimum_required(VERSION 3.12)
project(algo)

include_directories(algorithm)

set(SOURCE_LIB IsomorphismTree.cpp)

add_library(algo STATIC ${SOURCE_LIB})