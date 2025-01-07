#pragma once // Do not remove this

#include <string>
using namespace std;

class Employee
{
private:
    string Name;
    int ID;
    string HireDate;

public:
    // Default constructor
    Employee();

    // Parameterized constructor
    Employee(string n, int i, string hd);

    // Getters and setters
    string getName();
    void setName(string n);
    int getID();
    void setID(int i);
    string getHireDate();
    void setHireDate(string hd);

    // Virtual display method for polymorphism
    virtual void displayInfo();
};