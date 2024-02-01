#include "NonAlcoholic.h"


//Constructor
NonAlcoholic::NonAlcoholic(string name, double price, int quantity, double litres, double cityTax) 
{
	this->name = name;
	this->price = price;
	this->quantity = quantity;
	this->litres = litres;
	this->cityTax = cityTax;

}

//Getters and setters
string NonAlcoholic::getName()
{
	return name;
}

void NonAlcoholic::setName(string name)
{
	this->name = name;
}

double NonAlcoholic::getPrice()
{
	return price;
}

void NonAlcoholic::setPrice(double price)
{
	this->price = price;
}

//Methods
double NonAlcoholic::calculatePrice()
{
	return price * quantity + cityTax;
}

void NonAlcoholic::print()
{
	cout << "Name: " << name << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Litres: " << litres << endl;
	cout << "City tax: " << cityTax << endl;
	cout << "Total price: " << calculatePrice() << endl;
}
