#pragma once // Do not remove this

#include <string>
using namespace std;

class MyPoint
{
private:
    int x;
    int y;

public:
    MyPoint();
    MyPoint(int x, int y);

    int get_x();
    int get_y();
    void set_x(int x);
    void set_y(int y);
    int *get_xy(); // Pointer function
    void set_xy(int x, int y);
    string to_string();
    double calc_distance(int x, int y);
    double calc_distance(MyPoint *another);
    double calc_distance();
};