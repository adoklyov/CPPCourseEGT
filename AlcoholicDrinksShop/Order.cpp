#include "Order.h"
#include <iostream>
#include <vector>

Order::Order(vector<Drinks*> drinks, string date) {
	this->date = date;
	this->drinks = drinks;
}

vector<Drinks*> Order::getDrinks() {
	return drinks;
}

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
