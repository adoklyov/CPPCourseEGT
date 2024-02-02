#include "Animal.h"
#include <iostream>

//Constructor
Animal::Animal(string name)
{
	this->name = name;
}

//Getters and setters
void Animal::setName(string name)
{
	this->name = name;
}

string Animal::getName()
{
	return name;
}

//Method to print an animal noise
void Animal::speak()
{
	cout << "Animal sound." << endl;
}

