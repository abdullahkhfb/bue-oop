#include "Animal.h"
#include <iostream>
using namespace std;

// Initialize static counter
int Animal::animalCount = 0;

// Default constructor
Animal::Animal()
{
    species = "Unknown";
    age = 0;
    weight = 0.0;
    animalCount++;
}

// Parameterized constructor
Animal::Animal(string species, int age, double weight)
{
    this->species = species;
    this->age = age;
    this->weight = weight;
    animalCount++;
}

// Copy constructor
Animal::Animal(Animal &other)
{
    species = other.species;
    age = other.age;
    weight = other.weight;
    animalCount++;
}

// Destructor decrements counter
Animal::~Animal()
{
    animalCount--;
}

// Getter and setter implementations
string Animal::getSpecies()
{
    return species;
}

void Animal::setSpecies(string species)
{
    this->species = species;
}

int Animal::getAge()
{
    return age;
}

void Animal::setAge(int age)
{
    this->age = age;
}

double Animal::getWeight()
{
    return weight;
}

void Animal::setWeight(double weight)
{
    this->weight = weight;
}

// Static method to get total count
int Animal::getAnimalCount()
{
    return animalCount;
}