#include <iostream>
using namespace std;

int main()
{
    int number;
    int largest;
    int smallest;
    bool firstInput = true; // Flag to check if it's the first input

    cout << "Enter a series of integers (enter 99 to end): " << endl;
    while (true)
    {
        cin >> number;
        if (number == 99)
        {
            break;
        }
        if (firstInput)
        {
            // Initialize largest and smallest with the first input number
            largest = smallest = number;
            firstInput = false; // Set the flag to false after the first input
        }
        else
        {
            // Update largest and smallest based on the current number
            if (number > largest)
            {
                largest = number;
            }
            if (number < smallest)
            {
                smallest = number;
            }
        }
    }

    if (!firstInput) // Check if at least one number was entered
    {
        cout << "Largest number: " << largest << endl;
        cout << "Smallest number: " << smallest << endl;
    }
    else
    {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}
