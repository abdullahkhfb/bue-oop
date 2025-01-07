#include <iostream>
#include "Circle.h"
#include "Triangle.h"
using namespace std;

int main()
{
    // Create a Circle with radius 5
    Circle circle(5.0);
    circle.calcArea();
    cout << "Circle Area: " << circle.getArea() << endl;

    // Create a Triangle with base 6 and height 4
    Triangle triangle(6, 4);
    triangle.calcArea();
    cout << "Triangle Area: " << triangle.getArea() << endl;

    return 0;
}