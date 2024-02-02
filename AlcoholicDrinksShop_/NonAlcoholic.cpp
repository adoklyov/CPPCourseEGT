#include "NonAlcoholic.h"
#include <iostream>

//Constructor
NonAlcoholic::NonAlcoholic(string name, double price, int quantity, string type, double litres, double cityTax) : Drinks(name, price, quantity, type)
{
	this->litres = litres;
	this->cityTax = cityTax;
}

//Methods
void NonAlcoholic::print()
{
	Drinks::print();
	cout << "Litres: " << litres << " litres" << endl;
	cout << "City Tax: " << cityTax << "%" << endl;
}

//Method to calculate the price of the drink
double NonAlcoholic::calculatePrice()
{
	return quantity * price + cityTax;
}
