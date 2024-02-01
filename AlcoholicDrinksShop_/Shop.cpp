#include "Shop.h"


//Constructor
Shop::Shop(string name) 
{
	this->name = name;
}

//Getters and setters
string Shop::getName()
{
	return name;
}

void Shop::setName(string name)
{
	this->name = name;
}

vector<Customer>& Shop::getCustomers() 
{
	return customers;
}

void Shop::setCustomers(vector<Customer>& customers)
{
	this->customers = customers;
}

//Methods
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

