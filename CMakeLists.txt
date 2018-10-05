cmake_minimum_required(VERSION 3.12)

project(my_project)

# these instructions search the directory tree when cmake is
# invoked and put all files that match the pattern in the variables 
# `sources` and `include`
file(GLOB_RECURSE sources      src/*.cpp src/*.h)
# use globing to find files automatically

set(EXECUTABLE_OUTPUT_PATH ./bin)

add_executable(my_executable ${sources})

include_directories(
	./include/bridges-cxx/src/
	./include/bridges-cxx/src/data_src/
	./include/rapidjson/include/
	)

target_compile_options(my_executable PUBLIC -std=c++14 -Wall -Wfloat-conversion)

target_link_libraries(my_executable curl)

# not necessary, but provides useful information for some editors
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
