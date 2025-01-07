#include "Car.h"

Car::Car()
{
    yearModel = 0;
    make = "";
    speed = 0;
}

// Parameterized constructor
Car::Car(int yearModel, string make)
{
    this->yearModel = yearModel;
    this->make = make;
    speed = 0;
}

// Destructor
Car::~Car()
{
    cout << "The object has been destroyed" << endl;
}

// Setter functions
void Car::setYearModel(int yearModel)
{
    this->yearModel = yearModel;
}

void Car::setMake(string make)
{
    this->make = make;
}

void Car::setSpeed(int speed)
{
    this->speed = speed;
}

//  Getter functions
int Car::getYearModel()
{
    return yearModel;
}

string Car::getMake()
{
    return make;
}

int Car::getSpeed()
{
    return speed;
}

// Accelerate function
void Car::accelerate()
{
    speed += 5;
}

// Brake function
void Car::brake()
{
    speed -= 5;
}