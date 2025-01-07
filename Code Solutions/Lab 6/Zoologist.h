#pragma once // Do not remove this

#include "Animal.h"
using namespace std;

class Zoologist
{
public:
    // Friend class method to examine animal
    void examineAnimal(Animal &a);
};