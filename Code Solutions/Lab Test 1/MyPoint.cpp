#include "MyPoint.h"
#include <cmath>

// Default constructor - initializes point at origin (0,0)
MyPoint::MyPoint()
{
    x = 0;
    y = 0;
}

// Parameterized constructor - creates point at specified coordinates
MyPoint::MyPoint(int x, int y)
{
    this->x = x;
    this->y = y;
}

// Returns x coordinate
int MyPoint::get_x()
{
    return x;
}

// Returns y coordinate
int MyPoint::get_y()
{
    return y;
}

// Sets new x coordinate
void MyPoint::set_x(int x)
{
    this->x = x;
}

// Sets new y coordinate
void MyPoint::set_y(int y)
{
    this->y = y;
}

// Returns array containing both x and y coordinates
int *MyPoint::get_xy()
{
    static int xy[2];
    xy[0] = x;
    xy[1] = y;
    return xy;
}

// Sets both x and y coordinates
void MyPoint::set_xy(int x, int y)
{
    this->x = x;
    this->y = y;
}

// Returns string representation of point in format (x,y)
string MyPoint::to_string()
{
    return "(" + std::to_string(x) + "," + std::to_string(y) + ")";
}

// Calculates distance from this point to specified coordinates
double MyPoint::calc_distance(int x, int y)
{
    int xDiff = this->x - x;
    int yDiff = this->y - y;
    return sqrt(pow(xDiff, 2) + pow(yDiff, 2));
}

// Calculates distance from this point to another point object
double MyPoint::calc_distance(MyPoint *another)
{
    int xDiff = x - another->get_x();
    int yDiff = y - another->get_y();
    return sqrt(pow(xDiff, 2) + pow(yDiff, 2));
}

// Calculates distance from this point to origin (0,0)
double MyPoint::calc_distance()
{
    return sqrt(pow(x, 2) + pow(y, 2));
}