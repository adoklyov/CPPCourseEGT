#include "Cat.h"
#include <iostream>

Cat::Cat(string name) : Animal(name)
{

}

Cat::~Cat()
{

}

void Cat::speak()
{
	cout << "Cat noise." << getName() << endl;
}