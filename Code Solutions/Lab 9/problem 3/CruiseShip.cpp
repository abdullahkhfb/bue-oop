#include "CruiseShip.h"
#include <iostream>

CruiseShip::CruiseShip(string name, string year, int maxPassengers) : Ship(name, year)
{
    this->maxPassengers = maxPassengers;
}

int CruiseShip::getMaxPassengers()
{
    return this->maxPassengers;
}

void CruiseShip::setMaxPassengers(int maxPassengers)
{
    this->maxPassengers = maxPassengers;
}

void CruiseShip::print()
{
    cout << "Ship Name: " << name << endl;
    cout << "Maximum Passengers: " << maxPassengers << endl;
}