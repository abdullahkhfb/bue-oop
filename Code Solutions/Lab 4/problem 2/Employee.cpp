#include "Employee.h"

// Default constructor
Employee::Employee()
{
    name = "";
    idNumber = 0;
    department = "";
    position = "";
}

// Constructor with name and idNumber
Employee::Employee(string name, int idNumber)
{
    this->name = name;
    this->idNumber = idNumber;
    department = "";
    position = "";
}

// Constructor with all parameters
Employee::Employee(string name, int idNumber, string department, string position)
{
    this->name = name;
    this->idNumber = idNumber;
    this->department = department;
    this->position = position;
}

// Setter functions
void Employee::setName(string name)
{
    this->name = name;
}

void Employee::setIdNumber(int idNumber)
{
    this->idNumber = idNumber;
}

void Employee::setDepartment(string department)
{
    this->department = department;
}

void Employee::setPosition(string position)
{
    this->position = position;
}

// Getter functions
string Employee::getName()
{
    return name;
}

int Employee::getIdNumber()
{
    return idNumber;
}

string Employee::getDepartment()
{
    return department;
}

string Employee::getPosition()
{
    return position;
}

// Display information
void Employee::displayInfo()
{
    cout << "Name: " << name << endl;
    cout << "ID Number: " << idNumber << endl;
    cout << "Department: " << department << endl;
    cout << "Position: " << position << endl;
}