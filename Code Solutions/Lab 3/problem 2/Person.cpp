#include "Person.h"

Person::Person()
{
    firstName = "";
    lastName = "";
    fullName = "";
}

// Setter functions
void Person::setFirstName(string fName)
{
    firstName = fName;
}

void Person::setLastName(string lName)
{
    lastName = lName;
}

// Getter functions
string Person::getFirstName()
{
    return firstName;
}

string Person::getLastName()
{
    return lastName;
}

string Person::getFullName()
{
    return fullName;
}

// Function to concatenate first name and last name
void Person::concatenateName()
{
    fullName = firstName + " " + lastName;
}