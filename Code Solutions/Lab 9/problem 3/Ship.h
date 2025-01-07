#pragma once // Do not remove this

#include <string>
using namespace std;

class Ship
{
protected:
    string name;
    string year;

public:
    Ship(string name, string year);

    string getName();
    void setName(string name);
    string getYear();
    void setYear(string year);

    virtual void print();
};