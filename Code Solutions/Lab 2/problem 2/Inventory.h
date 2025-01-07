#pragma once // Do not remove this

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    Inventory();

    void setItemNumber(int itemNumber);
    void setQuantity(int quantity);
    void setCost(double cost);

    int getItemNumber();
    int getQuantity();
    double getCost();
    double getTotalCost();

    void calTotalCost();

    // Extra Requested Functions
    void getAllValues();
    void display();
};