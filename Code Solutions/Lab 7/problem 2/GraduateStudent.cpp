#include "GraduateStudent.h"
#include <iostream>

// Default constructor
GraduateStudent::GraduateStudent() : Student()
{
    ResearchArea = "";
    ScholarshipAmount = 0.0;
}

// Parameterized constructor
GraduateStudent::GraduateStudent(string n, int id, string ed, string ra, double sa) : Student(n, id, ed)
{
    ResearchArea = ra;
    ScholarshipAmount = sa;
}

// Gets research area
string GraduateStudent::getResearchArea()
{
    return ResearchArea;
}

// Sets research area
void GraduateStudent::setResearchArea(string ra)
{
    ResearchArea = ra;
}

// Gets scholarship amount
double GraduateStudent::getScholarshipAmount()
{
    return ScholarshipAmount;
}

// Sets scholarship amount
void GraduateStudent::setScholarshipAmount(double sa)
{
    ScholarshipAmount = sa;
}

// Get scholarship category based on amount
string getScholarshipCategory(GraduateStudent gs)
{
    if (gs.ScholarshipAmount >= 20000)
        return "Full";
    else if (gs.ScholarshipAmount >= 10000)
        return "Partial";
    else
        return "Minimal";
}

// Display graduate student information
void GraduateStudent::displayInfo()
{
    Student::displayInfo();
    cout << "Research Area: " << ResearchArea << endl;
    cout << "Scholarship Amount: $" << ScholarshipAmount << endl;
    cout << "Scholarship Category: " << getScholarshipCategory(*this) << endl;
}