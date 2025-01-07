#include "Circle.h"
#include <cmath>

Circle::Circle(double radius)
{
    this->radius = radius;
    area = 0.0;
}

void Circle::calcArea()
{
    area = 3.14159 * pow(radius, 2);
}