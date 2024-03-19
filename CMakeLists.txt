CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

PROJECT(CStack_test)

add_subdirectory(src)

ADD_EXECUTABLE(CStack_test main.c)
target_link_libraries(CStack_test PUBLIC CStack)