cmake_minimum_required(VERSION 3.12)
project(iso)

set(SOURCE_EXE main.cpp)

include_directories(algorithm test)

add_executable(main ${SOURCE_EXE})

add_subdirectory(algorithm)
add_subdirectory(test)


target_link_libraries(main
        TESTING
        IsomorphismSource)