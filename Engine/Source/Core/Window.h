#pragma once

#include "EngineCore.h"
#include "glad/glad.h"
#include "GLFW/glfw3.h"

class CORE_API Window
{
public:
    Window();
    ~Window();

    bool ShouldClose();
    void Display();

    GLFWwindow *window;
};
