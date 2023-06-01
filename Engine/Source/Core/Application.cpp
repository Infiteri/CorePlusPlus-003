#include "Application.h"
#include "GLFW/glfw3.h"

Application::Application()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    this->window = new Window();
}

Application::~Application()
{
    window->~Window();
}

void Application::Run()
{
    while (!window->ShouldClose())
    {
        window->Display();
    }
}
