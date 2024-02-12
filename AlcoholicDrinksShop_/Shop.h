#ifndef SHOP_H
#define SHOP_H

#include "Customer.h"
#include <vector>

class Shop {
public:

	//Constructor 
	Shop(vector<Customer>& customer);

	//Methods
	void drinkByType();
	Customer getBestCustomer();
	vector<Customer> getCustomerDrinkType(string& type);
	vector<Customer> getTop10Customers();

private:

	//Attributes
	vector<Customer> customers;

};

#endif 
