#pragma once

#include "EngineCore.h"
#include "Window.h"

class CORE_API Application
{

public:
    Application();
    virtual ~Application();

    void Run();

    Window* window;
};
