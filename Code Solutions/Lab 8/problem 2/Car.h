#pragma once // Do not remove this

#include "Engine.h"
#include <string>
using namespace std;

class Car
{
private:
    string model;  // Stores the car model
    string make;   // Stores the car make/manufacturer
    Engine engine; // Composition: Car has-an Engine

public:
    // Default constructor
    Car();

    // Parameterized constructor
    Car(string carModel, string carMake, int hp, string engineType);

    // Function to display car information
    void printCarInfo();
};