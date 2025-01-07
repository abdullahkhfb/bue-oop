#pragma once // Do not remove this

#include <string>
using namespace std;

class Client
{
protected:
    string Name;
    int ID;
    double Receipt;
    double Balance;

public:
    // Constructors
    Client();
    Client(string Name, int ID, double Receipt, double Balance);

    // Getters
    string getName();
    int getID();
    double getReceipt();
    double getBalance();

    // Setters
    void setName(string Name);
    void setID(int ID);
    void setReceipt(double Receipt);
    void setBalance(double Balance);

    // Virtual functions
    virtual double calDiscount();
    virtual void Withdraw(double amount);
};