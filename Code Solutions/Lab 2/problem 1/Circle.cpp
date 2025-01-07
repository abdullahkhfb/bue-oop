#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle()
{
    radius = 0.0;
}

// Setter function to set the radius
void Circle::setRadius(double r)
{
    radius = r;
}

// Getter function to get the radius
double Circle::getRadius()
{
    return radius;
}

// Function to calculate the area of the circle
double Circle::getArea()
{
    return pi * radius * radius;
}

// Function to calculate the diameter of the circle
double Circle::getDiameter()
{
    return 2 * radius;
}

// Function to calculate the circumference of the circle
double Circle::getCircumference()
{
    return 2 * pi * radius;
}

// Function to display the circle's properties
void Circle::display()
{
    cout << "The circle radius = " << getRadius() << endl;
    cout << "The circle area = " << getArea() << endl;
    cout << "The circle circumference = " << getCircumference() << endl;
}