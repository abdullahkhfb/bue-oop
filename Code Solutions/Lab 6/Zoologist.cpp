#include "Zoologist.h"
#include <iostream>
using namespace std;

// Examines and modifies animal attributes
void Zoologist::examineAnimal(Animal &a)
{
    cout << "Examining the animals' species, age, and weight\n";
    cout << "Species: " << a.species << endl;
    cout << "Age: " << a.age << endl;
    cout << "Weight: " << a.weight << endl;

    // Modify weight during examination
    a.weight += 5;
    cout << "Updated weight after examination: " << a.weight << endl;
}
