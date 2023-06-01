#include "Core.h"

class Sandbox : public Application
{
public:
    Sandbox() {}
    ~Sandbox() {}

    void Run()
    {
        while (true)
        {
        }
    }
};

Application *CreateApplication()
{
    return new Sandbox();
}
