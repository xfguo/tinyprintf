cmake_minimum_required(VERSION 2.8)
project(TINYPRINTF)
include_directories(include)
SET(LIBTINYPRINTF_SRC src/tinyprintf.c)
SET(CMAKE_C_COMPILER "or32-elf-gcc")
SET(CMAKE_C_FLAGS "-mhard-mul -Os -Wall")
ADD_LIBRARY(tinyprintf STATIC ${LIBTINYPRINTF_SRC})
install(TARGETS tinyprintf
	ARCHIVE DESTINATION lib
)

