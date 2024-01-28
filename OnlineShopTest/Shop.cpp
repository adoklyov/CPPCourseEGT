#include "shop.h"
#include <iostream>

Shop::Shop(string name) 
{
	this->name = name;
}

void Shop::addCustomer(Customer& customer)
{
	customers.push_back(customer);
}

void Shop::displayCustomers()
{
	cout << "Shop: " << name << endl;
	cout << "--------------------------" << endl;
	for (auto& customer : customers) {
		customer.displayOrder();	
	}
}

