#include "Shop.h"
#include <iostream>
#include <algorithm>
#include <map>

//Constructor
Shop::Shop(vector<Customer>& customer)
{
	this->customers = customer;
}

//Methods

//Method to display the drinks of a specific type
void Shop::drinkByType() {
	map<string, vector<Customer>> customerDrinkType;
	for (Customer& customer : customers) {
		for (Order& order : customer.getOrders()) {
			for (Drinks* drink : order.getDrinks()) {
				customerDrinkType[drink->getType()].push_back(customer);
			}
		}
	}
	for (auto& pair : customerDrinkType) {
		cout << "Type: " << pair.first << endl;
	}
}

//Method which counts the best customer with the most expensive drink
Customer Shop::getBestCustomer() {
	Customer bestCustomer = customers[0];
	double maxPrice = 0;
	for (Customer& customer : customers) {
		for (Order& order : customer.getOrders()) {
			for (Drinks* drink : order.getDrinks()) {
				if (drink->calculatePrice() > maxPrice) {
					maxPrice = drink->calculatePrice();
					bestCustomer = customer;
				}
			}
		}
	}
	return bestCustomer;
}

//Method which returns all customers with orders containing a drink of a given type
vector<Customer> Shop::getCustomerDrinkType(string& type) {
	vector<Customer> customerDrinkType;
	for (Customer& customer : customers) {
		for (Order& order : customer.getOrders()) {
			for (Drinks* drink : order.getDrinks()) {
				if (drink->getType() == type) {
					customerDrinkType.push_back(customer);
				}
			}
		}
	}
	return customerDrinkType;
}