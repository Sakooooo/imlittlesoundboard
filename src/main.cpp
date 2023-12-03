#include <iostream>
#include <imgui_internal.h>
#include <imgui.h>
#include <GLFW/glfw3.h>

int main() {
  std::printf("are we working?");

  bool isRunning; 

  ImGui::Begin("imlittlesoundboard", &isRunning, ImGuiWindowFlags_MenuBar);
  return 0;
}
