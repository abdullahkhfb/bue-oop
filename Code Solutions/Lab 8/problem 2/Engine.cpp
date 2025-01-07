#include "Engine.h"
#include <iostream>

// Default constructor implementation
Engine::Engine()
{
    horsePower = 0;
    type = "Unknown";
}

// Parameterized constructor implementation
Engine::Engine(int hp, string engineType)
{
    horsePower = hp;
    type = engineType;
}

void Engine::printEngineDetails()
{
    cout << horsePower << " HP " << type;
}