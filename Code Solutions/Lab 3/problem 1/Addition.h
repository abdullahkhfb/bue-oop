#pragma once // Do not remove this

class Addition
{
private:
    int num1;
    int num2;
    int res;

public:
    Addition();

    void setNum1(int n);
    void setNum2(int n);

    int getNum1();
    int getNum2();
    int getRes();

    void add();
};
