#include "CargoShip.h"
#include <iostream>

CargoShip::CargoShip(string name, string year, int cargoCapacity) : Ship(name, year)
{
    this->cargoCapacity = cargoCapacity;
}

int CargoShip::getCargoCapacity()
{
    return this->cargoCapacity;
}

void CargoShip::setCargoCapacity(int cargoCapacity)
{
    this->cargoCapacity = cargoCapacity;
}

void CargoShip::print()
{
    cout << "Ship Name: " << name << endl;
    cout << "Cargo Capacity: " << cargoCapacity << " tons" << endl;
}