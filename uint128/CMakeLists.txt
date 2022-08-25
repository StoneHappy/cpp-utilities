cmake_minimum_required(VERSION 3.5)

add_library(cpp-utilities-uint128 INTERFACE)
add_library(cpp-utilities::uint128 ALIAS cpp-utilities-uint128)

target_include_directories(cpp-utilities-uint128
INTERFACE
	${CMAKE_CURRENT_LIST_DIR}/include
)

if(CPP_UTILITIES_ENABLE_TEST)
add_subdirectory(test)
endif()

