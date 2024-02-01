#include "Order.h"


//Constructor
Order::Order(vector<Drinks*> drinks, string date) {
	this->date = date;
	this->drinks = drinks;
}

//Getters and setters
string Order::getDate() {
	return date;
}

void Order::setDate(string date) {
	this->date = date;
}


vector<Drinks*> Order::getDrinks() {
	return drinks;
}

void Order::setDrinks(vector<Drinks*> drinks) {
	this->drinks = drinks;
}


//Methods
double Order::calculateTotalPrice()
{
	double totalPrice = 0;
	for (auto& drink : drinks) {
		totalPrice += drink->getPrice();
	}
	return totalPrice;
}

void Order::print()
{
	cout << "Date: " << date << endl;
	for (auto& drink : drinks) {
		drink->print();
	}
	cout << "Total price: " << calculateTotalPrice() << endl;
}
