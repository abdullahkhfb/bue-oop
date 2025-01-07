#include <iostream>
#include "ProductionWorker.h"
using namespace std;

int main()
{
    // Create ProductionWorker object
    ProductionWorker pw("Youssef", 89657, "5/6/2020", 2, 18.5);

    // Display ProductionWorker information
    pw.displayInfo();

    // Create Employee object
    Employee emp1("Yassin", 97568, "8/9/2021");

    // Display Employee information
    emp1.displayInfo();

    return 0;
}