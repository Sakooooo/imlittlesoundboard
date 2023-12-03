cmake_minimum_required(VERSION 3.26.3)
project(imlittlesoundboard)

# set to /build/lib and /build/bin
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# man
if (WIN32)
  message("we need to define the module path on windows for some reason.")
  set(CMAKE_MODULE_PATH "C:/Program Files/CMake/share/cmake-3.26/Modules")
else()
  message("using default Module path")
endif()


add_subdirectory(lib/)

add_subdirectory(src/)

target_link_libraries(${PROJECT_NAME} PRIVATE lib)
