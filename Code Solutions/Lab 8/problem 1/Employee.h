#pragma once // Do not remove this

#include "Birthday.h"
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int ID;
    Birthday dateOfBirth;

public:
    Employee();
    Employee(string n, int id, Birthday bd);
    void printInfo();
};