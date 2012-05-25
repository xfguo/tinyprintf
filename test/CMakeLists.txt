cmake_minimum_required(VERSION 2.8)
project(TINYPRINTF_TEST)
SET(LIBTINYPRINTF_TEST_SRC test.c)
INCLUDE_DIRECTORIES(../include)
#SET(CMAKE_C_COMPILER "or32-elf-gcc")
ADD_EXECUTABLE(test test.c)
TARGET_LINK_LIBRARIES(test libtinyprintf.a)

