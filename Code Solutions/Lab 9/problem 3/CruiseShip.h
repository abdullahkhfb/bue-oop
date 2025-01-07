#pragma once // Do not remove this

#include "Ship.h"

class CruiseShip : public Ship
{
private:
    int maxPassengers;

public:
    CruiseShip(string name, string year, int maxPassengers);

    int getMaxPassengers();
    void setMaxPassengers(int maxPassengers);

    void print();
};