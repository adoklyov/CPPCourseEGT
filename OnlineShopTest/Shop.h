#ifndef SHOP_H
#define SHOP_H

#include "Customer.h"
#include <vector>

class Shop {
public:
	
	Shop(string name);

	void addCustomer(Customer& customer);
	void displayCustomers();

private:

	string name;
	vector<Customer> customers;
};

#endif 
