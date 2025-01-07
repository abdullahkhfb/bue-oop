#pragma once // Do not remove this

#include "BasicShape.h"

class Triangle : public BasicShape
{
private:
    int base;
    int height;

public:
    Triangle(int base, int height);
    void calcArea() override;
};