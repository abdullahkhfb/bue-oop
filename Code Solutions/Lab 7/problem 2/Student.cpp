#include "Student.h"
#include <iostream>

// Default constructor
Student::Student()
{
    Name = "";
    StudentID = 0;
    EnrollmentDate = "";
}

// Parameterized constructor
Student::Student(string n, int id, string ed)
{
    Name = n;
    StudentID = id;
    EnrollmentDate = ed;
}

// Gets name
string Student::getName()
{
    return Name;
}

// Sets name
void Student::setName(string n)
{
    Name = n;
}

// Gets ID
int Student::getStudentID()
{
    return StudentID;
}

// Sets ID
void Student::setStudentID(int id)
{
    StudentID = id;
}

// Gets enrollment date
string Student::getEnrollmentDate()
{
    return EnrollmentDate;
}

// Sets enrollment date
void Student::setEnrollmentDate(string ed)
{
    EnrollmentDate = ed;
}

// Display student information
void Student::displayInfo()
{
    cout << "\nStudent Information:" << endl;
    cout << "Name: " << Name << endl;
    cout << "Student ID: " << StudentID << endl;
    cout << "Enrollment Date: " << EnrollmentDate << endl;
}