#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number;
    cout << "Enter a decimal number: ";
    cin >> number;

    int roundedNumber = round(number);
    cout << "Rounded number: " << roundedNumber << endl;

    return 0;
}