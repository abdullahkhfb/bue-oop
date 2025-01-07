#include "Car.h"
#include <iostream>

// Default constructor implementation
Car::Car()
{
    model = "Unknown";
    make = "Unknown";
    engine = Engine();
}

// Parameterized constructor implementation
Car::Car(string carModel, string carMake, int hp, string engineType)
{
    model = carModel;
    make = carMake;
    engine = Engine(hp, engineType);
}

void Car::printCarInfo()
{
    cout << "Car Make: " << make << endl;
    cout << "Car Model: " << model << endl;
    cout << "Engine Details: ";
    engine.printEngineDetails();
    cout << endl;
}
