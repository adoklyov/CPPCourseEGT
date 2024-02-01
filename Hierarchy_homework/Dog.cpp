#include "Dog.h"
#include <iostream>

//Constructor
Dog::Dog(string name) : Animal(name) {}

//Method
void Dog::speak()
{
	cout << "Dog noise." << getName() << endl;
}