add_library(lib INTERFACE)

# imgui setup 
# this will get used in /src/CMakeLists.txt
set(IMGUI_SOURCES
  imgui/imgui.cpp
  imgui/imgui_demo.cpp
  imgui/imgui_draw.cpp
  imgui/imgui_widgets.cpp
)
