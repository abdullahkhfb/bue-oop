#pragma once // Do not remove this

#include "BasicShape.h"

class Circle : public BasicShape
{
private:
    double radius;

public:
    Circle(double radius);
    void calcArea();
};