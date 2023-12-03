#include <iostream>
#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>
#include <GL/GL.h>
#include <GLFW/glfw3.h>

int main() {

  if (!glfwInit())
    return 1;

  GLFWwindow* window = glfwCreateWindow(800, 800, "imlittlesoundboard", NULL, NULL); 

  if (!window)
    return 1;

  glfwMakeContextCurrent(window);

  IMGUI_CHECKVERSION();
  ImGui::CreateContext();
  ImGuiIO& io = ImGui::GetIO(); (void)io;
  ImGui::StyleColorsDark();

  while (!glfwWindowShouldClose(window))
    {
      float ratio;
      int width, height;
      glfwGetFramebufferSize(window, &width, &height);

      // do stuff here

      // setup imgui frame
      ImGui_ImplOpenGL3_NewFrame();
      ImGui_ImplGlfw_NewFrame();
      ImGui::NewFrame();

      // begin imgui thing
      ImGui::Begin("ImGUI Little Soundboard");
      ImGui::Text("Im not supposed to be here...");
      ImGui::End();

      // push to context
      ImGui::Render();
      ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());


      glfwSwapBuffers(window);
      glfwPollEvents();
    };

  glfwTerminate();

  return 0;
}
