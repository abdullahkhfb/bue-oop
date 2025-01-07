#include "Bat.h"
#include <iostream>
using namespace std;

Bat::Bat(string name)
{
    this->name = name;
}

void Bat::fact()
{
    cout << "Bat name: " << name << endl;
    cout << "Bats are the only mammals that have wings and can fly." << endl;
}