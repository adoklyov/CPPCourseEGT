#include "Cat.h"
#include <iostream>


//Constructor
Cat::Cat(string name) : Animal(name) {}

//Method
void Cat::speak()
{
	cout << "Cat noise." << getName() << endl;
}