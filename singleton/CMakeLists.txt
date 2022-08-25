cmake_minimum_required(VERSION 3.5)

add_library(cpp-utilities-singleton INTERFACE)
add_library(cpp-utilities::singleton ALIAS cpp-utilities-singleton)

target_include_directories(cpp-utilities-singleton
INTERFACE
	${CMAKE_CURRENT_LIST_DIR}/include
)

if(CPP_UTILITIES_ENABLE_TEST)
add_subdirectory(test)
endif()

