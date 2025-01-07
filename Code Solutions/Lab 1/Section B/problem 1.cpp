#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string movieName;
    int adultTicketsSold, childTicketsSold;
    double adultTicketPrice, childTicketPrice;
    const double netPercentage = 0.20;

    // Get the movie name and number of tickets sold from the user
    cout << "Enter the movie name: ";
    getline(cin, movieName);
    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTicketsSold;
    cout << "Enter the number of child tickets sold: ";
    cin >> childTicketsSold;

    // Bonus Part (Get the ticket prices from the user)
    cout << "Enter the price of an adult ticket: ";
    cin >> adultTicketPrice;
    cout << "Enter the price of a child ticket: ";
    cin >> childTicketPrice;

    // Calculate the gross and net box office profit
    double grossProfit = (adultTicketsSold * adultTicketPrice) + (childTicketsSold * childTicketPrice);
    double netProfit = grossProfit * netPercentage;
    double amountPaidToDistributor = grossProfit - netProfit;

    // Display the report - note: you can include <iomanip> to format the output if you want and round the values to 2 decimal places
    cout << "Movie Name: " << movieName << endl;
    cout << "Adult Tickets Sold: " << adultTicketsSold << endl;
    cout << "Child Tickets Sold: " << childTicketsSold << endl;
    cout << "Gross Box Office Profit: $" << round(grossProfit * 100) / 100 << endl;
    cout << "Net Box Office Profit: $" << round(netProfit * 100) / 100 << endl;
    cout << "Amount Paid to Distributor: $" << round(amountPaidToDistributor * 100) / 100 << endl;

    return 0;
}