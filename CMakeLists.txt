cmake_minimum_required (VERSION 2.6)

project (LCD)

set(CMAKE_CXX_FLAGS "-Wall")

include_directories(include)

add_executable(exe 
	src/main.cpp 
	src/lcd.cpp
	include/lcd.hpp
	include/numbers.hpp
)