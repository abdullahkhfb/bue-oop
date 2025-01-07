#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle;

    circle.setRadius(radius);
    circle.display();

    return 0;
}