cmake_minimum_required(VERSION 3.5)

add_library(cpp-utilities-thread_pool INTERFACE)
add_library(cpp-utilities::thread_pool ALIAS cpp-utilities-thread_pool)

target_include_directories(cpp-utilities-thread_pool
INTERFACE
	${CMAKE_CURRENT_LIST_DIR}/include
)


if(CPP_UTILITIES_ENABLE_TEST)
add_subdirectory(test)
endif()

