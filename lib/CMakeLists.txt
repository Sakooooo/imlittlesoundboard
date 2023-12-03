# begin library sources
add_subdirectory(glfw/)

# begin making library interface
add_library(lib INTERFACE)
target_link_libraries(lib INTERFACE glfw)
