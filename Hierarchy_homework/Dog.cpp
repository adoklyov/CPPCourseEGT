#include "Dog.h"
#include <iostream>

Dog::Dog(string name) : Animal(name)
{

}

Dog::~Dog()
{

}

void Dog::speak()
{
	cout << "Dog noise." << getName() << endl;
}