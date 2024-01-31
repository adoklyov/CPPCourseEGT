#include "NonAlcoholic.h"

NonAlcoholic::NonAlcoholic(string name, double price, int quantity, double litres, double cityTax) 
{
	this->name = name;
	this->price = price;
	this->quantity = quantity;
	this->litres = litres;
	this->cityTax = cityTax;

}

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
