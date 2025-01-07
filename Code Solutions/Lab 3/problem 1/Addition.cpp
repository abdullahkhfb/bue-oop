#include "Addition.h"

// Default constructor
Addition::Addition()
{
    num1 = 0;
    num2 = 0;
    res = 0;
}

// Setter functions
void Addition::setNum1(int n)
{
    num1 = n;
}

void Addition::setNum2(int n)
{
    num2 = n;
}

// Getter functions
int Addition::getNum1()
{
    return num1;
}

int Addition::getNum2()
{
    return num2;
}

int Addition::getRes()
{
    return res;
}

// Function to add num1 and num2 and store the result in res
void Addition::add()
{
    res = num1 + num2;
}