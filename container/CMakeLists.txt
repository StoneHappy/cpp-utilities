cmake_minimum_required(VERSION 3.5)

add_library(cpp-utilities-container INTERFACE)
add_library(cpp-utilities::container ALIAS cpp-utilities-container)

target_include_directories(cpp-utilities-container
INTERFACE
	${CMAKE_CURRENT_LIST_DIR}/include
)

if(CPP_UTILITIES_ENABLE_TEST)
add_subdirectory(test)
endif()


