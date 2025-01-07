#include "Client.h"
#include <iostream>

// Default constructor
Client::Client()
{
    Name = "";
    ID = 0;
    Receipt = 0.0;
    Balance = 0.0;
}

// Parameterized constructor
Client::Client(string Name, int ID, double Receipt, double Balance)
{
    this->Name = Name;
    this->ID = ID;
    this->Receipt = Receipt;
    this->Balance = Balance;
}

// Getters implementation
string Client::getName()
{
    return Name;
}
int Client::getID()
{
    return ID;
}
double Client::getReceipt()
{
    return Receipt;
}
double Client::getBalance()
{
    return Balance;
}

// Setters implementation
void Client::setName(string Name)
{
    this->Name = Name;
}
void Client::setID(int ID)
{
    this->ID = ID;
}
void Client::setReceipt(double Receipt)
{
    this->Receipt = Receipt;
}
void Client::setBalance(double Balance)
{
    this->Balance = Balance;
}

// Calculate discount - 10% for regular clients
double Client::calDiscount()
{
    return Receipt * 0.9;
}

// Withdraw implementation for regular clients
void Client::Withdraw(double amount)
{
    if (amount <= Balance)
    {
        Balance -= amount;
        cout << "You have successfully withdrawn the desired amount- As a debit" << endl;
    }
    else
    {
        cout << "Insufficient Balance" << endl;
    }
}