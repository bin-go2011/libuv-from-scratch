include_directories(${CMAKE_CURRENT_LIST_DIR})
add_executable(queue test_queue.cpp)
target_link_libraries(queue libuv)
