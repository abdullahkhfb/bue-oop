#pragma once // Do not remove this

#include <string>
using namespace std;

class Engine
{
private:
    int horsePower; // Stores the engine's horsepower
    string type;    // Stores the engine type (e.g., "V6", "V8", etc.)

public:
    // Default constructor
    Engine();

    // Parameterized constructor
    Engine(int hp, string engineType);

    // Function to display engine details
    void printEngineDetails();
};