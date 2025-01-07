#include <iostream>
#include "Car.h"

int main()
{
    // Create a Car object with specified parameters
    Car car1("Mustang", "Ford", 450, "V8");

    // Display car information including engine details
    car1.printCarInfo();

    return 0;
}