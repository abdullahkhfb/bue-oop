#include <iostream>
#include "Zoologist.h"
using namespace std;

// Friend function implementation
void displayAnimalInfo(Animal &a)
{
    cout << "\nAnimal Information:\n";
    cout << "Species: " << a.species << endl;
    cout << "Age: " << a.age << endl;
    cout << "Weight: " << a.weight << endl;
}

int main()
{
    // Test different constructors
    Animal a1;                   // Default constructor
    Animal a2("Lion", 5, 200.5); // Parameterized constructor
    Animal a3(a2);               // Copy constructor

    // Display total number of animals
    cout << "Total animals created: " << Animal::getAnimalCount() << endl;

    // Test setters
    a1.setSpecies("Tiger");
    a1.setAge(3);
    a1.setWeight(150.75);

    // Test friend function
    displayAnimalInfo(a1);
    displayAnimalInfo(a2);

    // Test friend class
    Zoologist zoo;
    zoo.examineAnimal(a1);

    // Show final animal count
    cout << "\nFinal animal count: " << Animal::getAnimalCount() << endl;

    return 0;
}