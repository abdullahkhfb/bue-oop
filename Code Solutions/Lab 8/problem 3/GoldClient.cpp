#include "GoldClient.h"
#include <iostream>

// Default constructor
GoldClient::GoldClient() : Client()
{
    limit = 0.0;
    borrowedAmount = 0.0;
}

// Parameterized constructor
GoldClient::GoldClient(string Name, int ID, double Receipt, double Balance, double limit, double borrowedAmount)
    : Client(Name, ID, Receipt, Balance)
{
    this->limit = limit;
    this->borrowedAmount = borrowedAmount;
}

// Getters implementation
double GoldClient::getLimit()
{
    return limit;
}

double GoldClient::getBorrowedAmount()
{
    return borrowedAmount;
}

// Setters implementation
void GoldClient::setLimit(double limit)
{
    this->limit = limit;
}

void GoldClient::setBorrowedAmount(double borrowedAmount)
{
    this->borrowedAmount = borrowedAmount;
}

// Calculate discount - 20% for gold clients
double GoldClient::calDiscount()
{
    return Receipt * 0.8;
}

// Withdraw implementation for gold clients
void GoldClient::Withdraw(double amount)
{
    Client::Withdraw(amount);
    if (amount <= limit)
    {
        borrowedAmount += amount;
        limit -= amount;
        cout << "You have successfully withdrawn the desired amount based on your limit- As a credit" << endl;
    }
    else
    {
        cout << "Amount exceeds available limit" << endl;
    }
}