/* This file is optional */
#include <iostream>
#include "MyPoint.h"

int main()
{
    MyPoint p1;
    MyPoint p2(3, 4);

    cout << "Point 1: " << p1.to_string() << endl;
    cout << "Point 2: " << p2.to_string() << endl;

    cout << "Distance from p1 to origin: " << p1.calc_distance() << endl;
    cout << "Distance from p2 to origin: " << p2.calc_distance() << endl;
    cout << "Distance between p1 and p2: " << p1.calc_distance(&p2) << endl;
    cout << "Distance from p1 to point (5,6): " << p1.calc_distance(5, 6) << endl;

    return 0;
}