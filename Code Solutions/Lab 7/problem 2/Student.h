#pragma once // Do not remove this

#include <string>
using namespace std;

class Student
{
private:
    string Name;
    int StudentID;
    string EnrollmentDate;

public:
    Student();
    Student(string n, int id, string ed);
    string getName();
    void setName(string n);
    int getStudentID();
    void setStudentID(int id);
    string getEnrollmentDate();
    void setEnrollmentDate(string ed);
    virtual void displayInfo();
};