#include "Alcoholic.h"
#include <iostream>

//Constructor
Alcoholic::Alcoholic(string name, double price, int quantity, string type, double volume, double tax) : Drinks(name, price, quantity, type)
{
	this->volume = volume;
	this->tax = tax;
}

//Methods

//Method to print the drink
void Alcoholic::print()
{
	Drinks::print();
	cout << "Volume: " << volume << " litres" << endl;
	cout << "Tax: " << tax << "%" << endl;
}


//Method to calculate the price of the drink
double Alcoholic::calculatePrice()
{
	return quantity * price + tax;
}