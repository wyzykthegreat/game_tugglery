cmake_minimum_required(VERSION 3.28)
project (MyTarget LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Debug)
endif()

#add_subdirectory(external/plog)
add_library(tuggleryCore
#	src/Core.cpp
#	src/State.cpp
	src/Card.cpp
#	src/Board.cpp
#	src/Player.cpp
)
target_include_directories(tuggleryCore PUBLIC include)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
	target_compile_options(tuggleryCore PRIVATE -Wall -Wshadow -Wextra -Wconversion
	-Wsign-conversion -Werror -std=c++20 -O2 -DNDEBUG -pedantic-errors)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
	target_compile_options(tuggleryCore PRIVATE -Wall -Wshadow -Wextra -Wconversion
	-Wsign-conversion -Werror -std=c++20 -O0 -g -pedantic-errors)
endif()

include(FetchContent)

FetchContent_Declare(
	Catch2
	GIT_REPOSITORY https://github.com/catchorg/Catch2.git
	GIT_TAG v3.8.1
)
FetchContent_MakeAvailable(Catch2)

add_executable(testCard tests/test_card.cpp)
target_link_libraries(testCard PRIVATE tuggleryCore Catch2::Catch2WithMain)
target_include_directories(testCard PRIVATE include)
