#pragma once // Do not remove this

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    Employee();
    Employee(string name, int idNumber);
    Employee(string name, int idNumber, string department, string position);

    void setName(string name);
    void setIdNumber(int idNumber);
    void setDepartment(string department);
    void setPosition(string position);

    string getName();
    int getIdNumber();
    string getDepartment();
    string getPosition();

    void displayInfo();
};
