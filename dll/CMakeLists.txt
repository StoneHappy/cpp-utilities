cmake_minimum_required(VERSION 3.5)

add_library(cpp-utilities-dll INTERFACE)
add_library(cpp-utilities::dll ALIAS cpp-utilities-dll)

target_include_directories(cpp-utilities-dll
INTERFACE
	${CMAKE_CURRENT_LIST_DIR}/include
)

if(CPP_UTILITIES_ENABLE_TEST)
add_subdirectory(test)
endif()

