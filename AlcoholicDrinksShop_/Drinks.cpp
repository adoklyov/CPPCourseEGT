#include "Drinks.h"


//Constructor
Drinks::Drinks(string name, double price, int quantity, string type)
{
	this->name = name;
	this->price = price;
	this->quantity = quantity;
	this->type = type;
}

//Destructor
Drinks::~Drinks()
{
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

string Drinks::getType()
{
	return type;
}

void Drinks::setName(string name)
{
	this->name = name;
}

void Drinks::setPrice(double price)
{
	this->price = price;
}

void Drinks::setQuantity(int quantity)
{
	this->quantity = quantity;
}

void Drinks::setType(string type)
{
	this->type = type;
}

//Methods

//Method to print the drink
void Drinks::print()
{
	cout << "Name: " << name << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Type: " << type << endl;
}