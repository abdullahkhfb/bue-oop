#include "Inventory.h"
#include <iostream>
using namespace std;

Inventory::Inventory()
{
    itemNumber = 0;
    quantity = 0;
    cost = 0.0;
    totalCost = 0.0;
}

// Setter functions
void Inventory::setItemNumber(int itemNumber)
{
    if (itemNumber >= 0)
    {
        this->itemNumber = itemNumber;
    }
    else
    {
        cout << "Invalid item number. It must be non-negative." << endl;
    }
}

void Inventory::setQuantity(int quantity)
{
    if (quantity >= 0)
    {
        this->quantity = quantity;
    }
    else
    {
        cout << "Invalid quantity. It must be non-negative." << endl;
    }
}

void Inventory::setCost(double cost)
{
    if (cost >= 0)
    {
        this->cost = cost;
    }
    else
    {
        cout << "Invalid cost. It must be non-negative." << endl;
    }
}

// Getter functions
int Inventory::getItemNumber()
{
    return itemNumber;
}

int Inventory::getQuantity()
{
    return quantity;
}

double Inventory::getCost()
{
    return cost;
}

double Inventory::getTotalCost()
{
    return totalCost;
}

// Function to calculate the total inventory cost
void Inventory::calTotalCost()
{
    totalCost = quantity * cost;
}

// Function to get all values from the user
void Inventory::getAllValues()
{
    int itemNumber, quantity;
    double cost;

    cout << "Enter item number: ";
    cin >> itemNumber;
    setItemNumber(itemNumber);

    cout << "Enter quantity: ";
    cin >> quantity;
    setQuantity(quantity);

    cout << "Enter cost: ";
    cin >> cost;
    setCost(cost);

    calTotalCost();
}

// Function to display the inventory details
void Inventory::display()
{
    cout << "Item number: " << getItemNumber() << endl;
    cout << "Quantity: " << getQuantity() << endl;
    cout << "Cost: " << getCost() << " $" << endl;
    cout << "Total cost: " << getTotalCost() << " $" << endl;
}