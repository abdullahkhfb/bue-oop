#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double toCelsius(double fahrenheit)
{
    return 5.0 / 9.0 * (fahrenheit - 32);
}

int main()
{
    cout << "Fahrenheit\tCelsius" << endl;
    cout << "------------------------" << endl;

    // Loop to display the table of Fahrenheit temperatures from 20 through 40
    for (int fahrenheit = 20; fahrenheit <= 40; fahrenheit++)
    {
        double celsius = toCelsius(fahrenheit);
        cout << fahrenheit << "\t\t" << celsius << endl;
    }

    return 0;
}