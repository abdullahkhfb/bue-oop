#include <iostream>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

int main()
{
    Ship *ships[4];

    ships[0] = new Ship("Voyager", "2000");
    ships[1] = new CruiseShip("Royal Caribbean", "2010", 3000);
    ships[2] = new CargoShip("Maersk", "2015", 50000);
    ships[3] = new Ship("Explorer", "2024");

    for (int i = 0; i < 4; i++)
    {
        cout << "\nShip " << (i + 1) << " Details:" << endl;
        ships[i]->print();
    }

    // Clean up dynamic memory
    for (int i = 0; i < 4; i++)
    {
        delete ships[i];
    }

    return 0;
}