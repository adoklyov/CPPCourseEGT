#ifndef SHOP_H
#define SHOP_H

#include "Customer.h"
#include <vector>

class Shop {
public:
	//Constructor 
	Shop(string name);

	//Methods
	void addCustomer(Customer& customer);
	void displayCustomers();

	//Getters and setters
	string getName();
	void setName(string name);
	vector<Customer>& getCustomers();
	void setCustomers(vector<Customer>& customers);

private:

	string name;
	vector<Customer> customers;
};

#endif 
