#include <iostream>
#include "GraduateStudent.h"
using namespace std;

int main()
{
    // Create GraduateStudent object
    GraduateStudent gs("Alice", 12345, "09/01/2022", "Artificial Intelligence", 25000);

    // Display GraduateStudent information
    gs.displayInfo();

    // Create Student object
    Student st1("Bob", 67890, "09/01/2023");

    // Display Student information
    st1.displayInfo();

    return 0;
}