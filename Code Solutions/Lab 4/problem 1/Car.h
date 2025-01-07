#pragma once // Do not remove this

#include <string>
#include <iostream>

using namespace std;

class Car
{
private:
    int yearModel;
    string make;
    int speed;

public:
    Car();
    Car(int yearModel, string make);
    ~Car();

    void setYearModel(int yearModel);
    void setMake(string make);
    void setSpeed(int speed);

    int getYearModel();
    string getMake();
    int getSpeed();

    // Accelerate function
    void accelerate();

    // Brake function
    void brake();
};