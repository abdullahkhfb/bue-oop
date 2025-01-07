#pragma once // Do not remove this

#include "Ship.h"

class CargoShip : public Ship
{
private:
    int cargoCapacity;

public:
    CargoShip(string name, string year, int cargoCapacity);

    int getCargoCapacity();
    void setCargoCapacity(int cargoCapacity);

    void print();
};