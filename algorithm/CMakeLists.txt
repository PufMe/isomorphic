cmake_minimum_required(VERSION 3.12)
project(IsomorphismSource)
include_directories(src)


set(SOURCE_LIB IsomorphismTree.cpp)

add_library(IsomorphismSource STATIC ${SOURCE_LIB})