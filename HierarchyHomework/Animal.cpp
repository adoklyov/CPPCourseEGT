#include "Animal.h"
#include <iostream>

Animal::Animal(string name)
{
	this->name = name;
}

Animal::~Animal()
{

}

void Animal::speak() 
{
	cout << "Animal sound." << endl;
}

void Animal::setName(string name)
{
	this->name = name;
}

string Animal::getName()
{
	return name;
}