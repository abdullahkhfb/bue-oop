#pragma once // Do not remove this

#include "Mammal.h"
#include "WingedAnimal.h"
#include <string>
using namespace std;

class Bat : public Mammal, public WingedAnimal
{
private:
    string name;

public:
    Bat(string name);
    void fact();
};