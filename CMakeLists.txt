cmake_minimum_required(VERSION 3.28)
project (MyTarget LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add_subdirectory(external/plog)
add_library(tuggleryCore
#	src/Core.cpp
	src/State.cpp
	src/Card.cpp
#	src/Board.cpp
	src/Player.cpp
)


if(CMAKE_BUILD_TYPE STREQUAL "Debug")
	target_compile_options(my_target PRIVATE -Wall -Wshadow -Wextra -Wconversion
	-Wsign-conversion -Werror -std=c++20 -O2 -DNDEBUG -pedantic-errors)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
	target_compile_options(my_target PRIVATE -Wall -Wshadow -Wextra -Wconversion
	-Wsign-conversion -Werror -std=c++20 -O0 -g -pedantic-errors)
endif()

