# make library interface
add_library(lib INTERFACE)

# begin library sources

# glfw
add_subdirectory(glfw/)
target_link_libraries(lib INTERFACE glfw)
