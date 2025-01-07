#pragma once // Do not remove this

#include "Employee.h"

// ProductionWorker class inherits from Employee
class ProductionWorker : public Employee
{
private:
    int Shift; // Worker's shift (1 for day, 2 for night)
    double HourlyPayRate;

public:
    // Default constructor
    ProductionWorker();

    // Parameterized constructor
    ProductionWorker(string n, int i, string hd, int shift, double rate);

    // Getters and setters
    int getShift();
    void setShift(int shift);
    double getHourlyPayRate();
    void setHourlyPayRate(double rate);

    // Override display method
    void displayInfo();

    // Friend function to get shift name
    friend string getShiftName(ProductionWorker pw);
};