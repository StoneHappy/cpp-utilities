cmake_minimum_required(VERSION 3.5)

add_library(cpp-utilities-fixed INTERFACE)
add_library(cpp-utilities::fixed ALIAS cpp-utilities-fixed)

target_include_directories(cpp-utilities-fixed
INTERFACE
	${CMAKE_CURRENT_LIST_DIR}/include
)

if(CPP_UTILITIES_ENABLE_TEST)
add_subdirectory(test)
endif()

