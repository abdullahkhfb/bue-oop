#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
    // Create an object named car1 using the parameterized constructor
    Car car1(2006, "Porsche");

    // Call the accelerate function five times and display the current speed
    for (int i = 0; i < 5; i++)
    {
        car1.accelerate();
        cout << "Current speed of car1: " << car1.getSpeed() << " mph" << endl;
    }

    // Call the brake function five times and display the current speed
    for (int i = 0; i < 5; i++)
    {
        car1.brake();
        cout << "Current speed of car1: " << car1.getSpeed() << " mph" << endl;
    }

    // Create an object named car2 using the default constructor
    Car car2;

    return 0;
}