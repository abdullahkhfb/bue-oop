#pragma once // Do not remove this

class Circle
{
private:
    double radius;
    const double pi = 3.14159;

public:
    Circle();

    void setRadius(double r);

    double getRadius();
    double getArea();
    double getDiameter();
    double getCircumference();

    // Extra Requested Function
    void display();
};