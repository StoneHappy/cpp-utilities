cmake_minimum_required(VERSION 3.5)

add_library(cpp-utilities-logger INTERFACE)
add_library(cpp-utilities::logger ALIAS cpp-utilities-logger)

target_include_directories(cpp-utilities-logger
INTERFACE
	${CMAKE_CURRENT_LIST_DIR}/include
)

if(CPP_UTILITIES_ENABLE_TEST)
add_subdirectory(test)
endif()
