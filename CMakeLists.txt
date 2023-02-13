cmake_minimum_required(VERSION 3.12)
project(iso)

set(SOURCE_EXE main.cpp)

include_directories(algorithm test generator)

add_executable(main ${SOURCE_EXE})

add_subdirectory(algorithm)
add_subdirectory(test)
add_subdirectory(generator)
target_link_libraries(main algo test gen)