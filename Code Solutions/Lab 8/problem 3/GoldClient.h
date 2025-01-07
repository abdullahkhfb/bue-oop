#pragma once // Do not remove this

#include "Client.h"

class GoldClient : public Client
{
private:
    double limit;
    double borrowedAmount;

public:
    // Constructors
    GoldClient();
    GoldClient(string Name, int ID, double Receipt, double Balance, double limit, double borrowedAmount);

    // Getters
    double getLimit();
    double getBorrowedAmount();

    // Setters
    void setLimit(double limit);
    void setBorrowedAmount(double borrowedAmount);

    // Override virtual functions
    double calDiscount();
    void Withdraw(double amount);
};