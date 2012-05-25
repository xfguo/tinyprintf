cmake_minimum_required(VERSION 2.8)
project(TINYPRINTF)
SET(LIBTINYPRINTF_SRC src/tinyprintf.c)
#SET(CMAKE_C_COMPILER "or32-elf-gcc")
ADD_LIBRARY(tinyprintf STATIC ${LIBTINYPRINTF_SRC})
install(TARGETS tinyprintf
	ARCHIVE DESTINATION lib
)

