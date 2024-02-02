#include "Cat.h"
#include <iostream>


//Constructor
Cat::Cat(string name) : Animal(name) {}


//Method to print a cat noise, overloads the animal noise method
void Cat::speak()
{
	cout << "Cat noise." << getName() << endl;
}