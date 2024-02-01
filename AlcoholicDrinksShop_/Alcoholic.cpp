#include "Alcoholic.h"

//Constructor
Alcoholic::Alcoholic(string name, double price, int quantity, double volume, double tax)
{
	this->name = name;
	this->price = price;
	this->quantity = quantity;
	this->volume = volume;
	this->tax = tax;

}

//Getters and setters
double Alcoholic::getVolume()
{
	return volume;
}

void Alcoholic::setVolume(double volume)
{
	this->volume = volume;
}

double Alcoholic::getTax()
{
	return tax;
}

void Alcoholic::setTax(double tax)
{
	this->tax = tax;
}


//Methods
double Alcoholic::calculatePrice()
{
	return quantity * (price * tax);
}

void Alcoholic::print()
{
	cout << "Name: " << name << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Volume: " << volume << endl;
	cout << "Tax: " << tax << endl;
	cout << "Total price: " << calculatePrice() << endl;
}
