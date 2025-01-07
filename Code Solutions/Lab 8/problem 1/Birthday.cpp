#include "Birthday.h"
#include <iostream>
using namespace std;

Birthday::Birthday()
{
    day = 1;
    month = 1;
    year = 2000;
}

Birthday::Birthday(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void Birthday::printBirthday()
{
    cout << day << "/" << month << "/" << year;
}