#pragma once // Do not remove this

class Birthday
{
private:
    int day;
    int month;
    int year;

public:
    Birthday();
    Birthday(int d, int m, int y);
    void printBirthday();
};