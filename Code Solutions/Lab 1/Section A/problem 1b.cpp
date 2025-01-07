#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double numbers[5];
    double sum = 0.0;

    cout << "Enter five decimal numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    int roundedSum = round(sum);
    cout << "Rounded sum: " << roundedSum << endl;

    return 0;
}