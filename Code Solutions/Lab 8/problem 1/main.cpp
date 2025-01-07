#include <iostream>
#include "Employee.h"
#include "Birthday.h"
using namespace std;

int main()
{
    Birthday bd(25, 5, 2002);
    Employee emp1("Hesham", 1256, bd);
    emp1.printInfo();

    return 0;
}