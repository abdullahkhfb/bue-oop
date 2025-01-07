#pragma once // Do not remove this

class BasicShape
{
protected:
    double area;

public:
    double getArea();
    virtual void calcArea() = 0;
};