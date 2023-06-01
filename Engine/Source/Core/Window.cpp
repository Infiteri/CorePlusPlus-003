#include "Window.h"

Window::Window()
{
    this->window = glfwCreateWindow(1024, 576, "Hello World", NULL, NULL);
    glfwMakeContextCurrent(this->window);

    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
}

Window::~Window()
{
    glfwDestroyWindow(window);
}

bool Window::ShouldClose()
{
    return glfwWindowShouldClose(window);
}

void Window::Display()
{
    glClearColor(0, 1, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(window);
    glfwPollEvents();
}
