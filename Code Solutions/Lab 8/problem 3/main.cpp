#include <iostream>
#include "Client.h"
#include "GoldClient.h"

int main()
{
    // Create regular client
    Client C("Sarah", 9867, 980.5, 11500);
    cout << "Discount for Client: " << C.calDiscount() << endl;
    C.Withdraw(11000);
    C.Withdraw(580);

    // Create gold client
    GoldClient GC("Moaz", 8965, 980.75, 11500, 5000, 0);
    cout << "\nDiscount for GoldClient: " << GC.calDiscount() << endl;
    GC.Withdraw(11000);
    GC.Withdraw(580);

    // Create client pointer to GoldClient
    Client *p = &GC;
    cout << "\nDiscount for GoldClient through pointer: " << p->calDiscount() << endl;
    p->Withdraw(600);

    return 0;
}