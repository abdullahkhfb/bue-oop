#include <iostream>
#include "Addition.h"
using namespace std;

int main()
{
    // Create an object named A1 with value 5 for num1 and value 6 for num2
    Addition A1;
    A1.setNum1(5);
    A1.setNum2(6);
    A1.add();

    // Create another object named A2
    Addition A2;
    A2.setNum1(10);
    A2.setNum2(15);
    A2.add();

    // Display the results
    cout << "A1: num1 = " << A1.getNum1() << ", num2 = " << A1.getNum2() << ", res = " << A1.getRes() << endl;
    cout << "A2: num1 = " << A2.getNum1() << ", num2 = " << A2.getNum2() << ", res = " << A2.getRes() << endl;

    return 0;
}