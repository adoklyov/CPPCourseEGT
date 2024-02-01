#include "Drinks.h"


//Constructor
Drinks::Drinks(string name, double price, int quantity)
{
	this->name = name;
	this->price = price;
	this->quantity = quantity;
}

//Getters and setters
string Drinks::getName()
{
	return name;
}

double Drinks::getPrice()
{
	return price;
}

int Drinks::getQuantity()
{
	return quantity;
}

void Drinks::setQuantity(int quantity)
{
	this->quantity = quantity;
}

void Drinks::setName(string name)
{
	this->name = name;
}

void Drinks::setPrice(double price)
{
	this->price = price;
}


