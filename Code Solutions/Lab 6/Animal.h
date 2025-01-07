#pragma once // Do not remove this

#include <string>
using namespace std;

class Animal
{
private:
    // Animal attributes
    string species;
    int age;
    double weight;
    static int animalCount; // Tracks total number of animals

public:
    // Constructors and destructor
    Animal();
    Animal(string species, int age, double weight);
    Animal(Animal &other);
    ~Animal();

    // Getters and setters
    string getSpecies();
    void setSpecies(string species);
    int getAge();
    void setAge(int age);
    double getWeight();
    void setWeight(double weight);
    static int getAnimalCount();

    // Friend declarations
    friend void displayAnimalInfo(Animal &a);
    friend class Zoologist;
};