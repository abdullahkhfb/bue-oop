#include "Triangle.h"

Triangle::Triangle(int base, int height)
{
    this->base = base;
    this->height = height;
    area = 0.0;
}

void Triangle::calcArea()
{
    area = 0.5 * base * height;
}