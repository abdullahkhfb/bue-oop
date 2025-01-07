#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
    name = "";
    ID = 0;
    dateOfBirth = Birthday();
}

Employee::Employee(string n, int id, Birthday bd)
{
    name = n;
    ID = id;
    dateOfBirth = bd;
}

void Employee::printInfo()
{
    cout << "Employee name: " << name << endl;
    cout << "Employee birthday: ";
    dateOfBirth.printBirthday();
    cout << endl;
}