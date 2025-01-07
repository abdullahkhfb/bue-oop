#include "Ship.h"
#include <iostream>

Ship::Ship(string name, string year)
{
    this->name = name;
    this->year = year;
}

string Ship::getName()
{
    return this->name;
}

void Ship::setName(string name)
{
    this->name = name;
}

string Ship::getYear()
{
    return this->year;
}

void Ship::setYear(string year)
{
    this->year = year;
}

void Ship::print()
{
    cout << "Ship Name: " << name << endl;
    cout << "Year Built: " << year << endl;
}