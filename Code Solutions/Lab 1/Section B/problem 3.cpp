#include <iostream>
#include <string>
using namespace std;

// Function to get the name of the month based on its numerical value
string getMonthName(int month)
{
    // Array of month names, where index 0 corresponds to "January", index 1 to "February", and so on
    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};

    // Return the month name corresponding to the given month number
    // Subtract 1 from the month number to get the correct index (since array indices start at 0)
    return months[month - 1];
}

int main()
{
    int day, month, year;

    do
    {
        cout << "Enter day (1-31): ";
        cin >> day;
        if (day < 1 || day > 31)
        {
            cout << "Invalid day. Please enter a value between 1 and 31." << endl;
        }
    } while (day < 1 || day > 31);

    do
    {
        cout << "Enter month (1-12): ";
        cin >> month;
        if (month < 1 || month > 12)
        {
            cout << "Invalid month. Please enter a value between 1 and 12." << endl;
        }
    } while (month < 1 || month > 12);

    cout << "Enter year: ";
    cin >> year;
    cout << month << "/" << day << "/" << year << endl;
    cout << getMonthName(month) << " " << day << ", " << year << endl;
    cout << day << " " << getMonthName(month) << " " << year << endl;

    return 0;
}