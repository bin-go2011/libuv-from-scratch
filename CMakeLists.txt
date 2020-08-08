cmake_minimum_required(VERSION 3.14)
add_library(libuv src/version.c)
target_include_directories(libuv PUBLIC 
    ${CMAKE_CURRENT_LIST_DIR}/include
    ${CMAKE_CURRENT_LIST_DIR}/src
)
add_subdirectory(test)