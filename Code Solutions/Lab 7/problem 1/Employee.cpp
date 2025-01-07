#include "Employee.h"
#include <iostream>

// Default constructor implementation
Employee::Employee()
{
    Name = "";
    ID = 0;
    HireDate = "";
}

// Parameterized constructor implementation
Employee::Employee(string n, int i, string hd)
{
    Name = n;
    ID = i;
    HireDate = hd;
}

// Get employee name
string Employee::getName()
{
    return Name;
}

// Set employee name
void Employee::setName(string n)
{
    Name = n;
}

// Get employee ID
int Employee::getID()
{
    return ID;
}

// Set employee ID
void Employee::setID(int i)
{
    ID = i;
}

// Get employee hire date
string Employee::getHireDate()
{
    return HireDate;
}

// Set employee hire date
void Employee::setHireDate(string hd)
{
    HireDate = hd;
}

// Display employee information
void Employee::displayInfo()
{
    cout << "\nEmployee Information:" << endl;
    cout << "Name: " << Name << endl;
    cout << "ID: " << ID << endl;
    cout << "Hire Date: " << HireDate << endl;
}