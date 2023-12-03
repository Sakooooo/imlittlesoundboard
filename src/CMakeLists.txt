add_executable(${PROJECT_NAME})

set(SOURCES
  main.cpp
)

set(IMGUI_SOURCES
  ../lib/imgui/imgui.cpp
  ../lib/imgui/imgui_demo.cpp
  ../lib/imgui/imgui_draw.cpp
  ../lib/imgui/imgui_widgets.cpp
  ../lib/imgui/imgui_tables.cpp
  ../lib/imgui/backends/imgui_impl_glfw.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE ../lib/imgui)
target_include_directories(${PROJECT_NAME} PRIVATE ../lib/imgui/backends)
target_link_libraries(${PROJECT_NAME} PRIVATE lib)

target_sources(${PROJECT_NAME} PRIVATE ${SOURCES} ${IMGUI_SOURCES})
