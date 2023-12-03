cmake_minimum_required(VERSION 3.26.3)
project(imlittlesoundboard)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(lib/)

add_subdirectory(src/)

target_link_libraries(${PROJECT_NAME} PRIVATE lib)
