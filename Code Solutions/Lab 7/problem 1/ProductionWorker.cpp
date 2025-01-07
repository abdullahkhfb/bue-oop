#include "ProductionWorker.h"
#include <iostream>

// Default constructor - calls Employee default constructor
ProductionWorker::ProductionWorker() : Employee()
{
    Shift = 1;
    HourlyPayRate = 0.0;
}

// Parameterized constructor - calls Employee parameterized constructor
ProductionWorker::ProductionWorker(string n, int i, string hd, int shift, double rate) : Employee(n, i, hd)
{
    Shift = shift;
    HourlyPayRate = rate;
}

// Get worker's shift
int ProductionWorker::getShift()
{
    return Shift;
}

// Set worker's shift
void ProductionWorker::setShift(int shift)
{
    Shift = shift;
}

// Get worker's hourly pay rate
double ProductionWorker::getHourlyPayRate()
{
    return HourlyPayRate;
}

// Set worker's hourly pay rate
void ProductionWorker::setHourlyPayRate(double rate)
{
    HourlyPayRate = rate;
}

// Friend function to convert shift number to name
string getShiftName(ProductionWorker pw)
{
    return (pw.Shift == 1) ? "Day" : "Night";
}

// Override display method to include shift and pay rate
void ProductionWorker::displayInfo()
{
    Employee::displayInfo();
    cout << "Shift: " << getShiftName(*this) << endl;
    cout << "Hourly Pay Rate: $" << HourlyPayRate << endl;
}