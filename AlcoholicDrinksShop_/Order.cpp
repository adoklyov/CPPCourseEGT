#include "Order.h"
#include <iostream>


//Constructor
Order::Order(vector<Drinks*> drinks, string date) {
	this->drinks = drinks;
	this->date = date;
}

Order::Order() {
}

//Methods

//Method to add a drink to the order
void Order::addDrink(Drinks* drink) {
	drinks.push_back(drink);
}

//Method to calculate the total price of the order
double Order::calculateTotalPrice() {
	double totalPrice = 0;
	for (int i = 0; i < drinks.size(); i++) {
		totalPrice += drinks[i]->calculatePrice();
	}
	return totalPrice;
}


//Method to print the order
void Order::printOrder() {
	for (Drinks* drink : drinks) {
		drink->print();
	}
}