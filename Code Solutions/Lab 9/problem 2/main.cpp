#include <iostream>
#include "Mammal.h"
#include "WingedAnimal.h"
#include "Bat.h"

int main()
{
    // Create Mammal object and call printMDetails
    Mammal m;
    m.printMDetails();

    // Create Bat object and demonstrate multiple inheritance
    Bat b1("Little brown bat");
    b1.printMDetails();
    b1.printWDetails();
    b1.fact();

    return 0;
}