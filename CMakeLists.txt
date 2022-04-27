cmake_minimum_required(VERSION 3.18)
project(LRSystem VERSION 1.0.0)

set(LRS_SOURCE "src/main.cpp" "src/Login.cpp" "src/Register.cpp" "src/misc.cpp")

add_executable(LRSystem ${LRS_SOURCE})

include_directories("src_includes/" "include/")

add_library(JSONCPP STATIC IMPORTED)
set_target_properties(JSONCPP PROPERTIES 
					  IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/lib/json/libjsoncpp.a"
					  INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/include/json/")

target_link_libraries(LRSystem JSONCPP)