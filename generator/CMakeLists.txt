cmake_minimum_required(VERSION 3.12)
project(gen)

include_directories(generator)

set(SOURCE_LIB generatorTests.cpp)

add_library(gen STATIC ${SOURCE_LIB})