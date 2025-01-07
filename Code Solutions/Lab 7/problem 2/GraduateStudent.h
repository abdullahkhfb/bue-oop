#pragma once // Do not remove this

#include "Student.h"

class GraduateStudent : public Student
{
private:
    string ResearchArea;
    double ScholarshipAmount;

public:
    GraduateStudent();
    GraduateStudent(string n, int id, string ed, string ra, double sa);
    string getResearchArea();
    void setResearchArea(string ra);
    double getScholarshipAmount();
    void setScholarshipAmount(double sa);
    void displayInfo();
    friend string getScholarshipCategory(GraduateStudent gs);
};