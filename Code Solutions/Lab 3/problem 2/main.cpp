#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    // Create an object named P1 with the FirstName as "John" and LastName as "Doe"
    Person P1;

    P1.setFirstName("John");
    P1.setLastName("Doe");
    P1.concatenateName();

    // Create another object named P2
    Person P2;

    P2.setFirstName("Ken");
    P2.setLastName("Takakura");
    P2.concatenateName();

    // Display the full names
    cout << "P1: Full Name = " << P1.getFullName() << endl;
    cout << "P2: Full Name = " << P2.getFullName() << endl;

    return 0;
}