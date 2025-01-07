#pragma once // Do not remove this

#include <string>
using namespace std;

class Person
{
private:
    string firstName;
    string lastName;
    string fullName;

public:
    Person();

    void setFirstName(string fName);
    void setLastName(string lName);

    string getFirstName();
    string getLastName();
    string getFullName();

    void concatenateName();
};