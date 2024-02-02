#include "Dog.h"
#include <iostream>

//Constructor
Dog::Dog(string name) : Animal(name) {}

//Method to print a dog noise, overloads the animal noise method
void Dog::speak()
{
	cout << "Dog noise." << getName() << endl;
}