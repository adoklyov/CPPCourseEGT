#include "Drinks.h"

Drinks::Drinks(string name, double price, int quantity)
{
	this->name = name;
	this->price = price;
	this->quantity = quantity;


}

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


