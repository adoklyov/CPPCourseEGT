#i#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Order.h"
#include <vector>
#include <string>

using namespace std;

class Customer
{
public:

	//Constructor
	Customer(string username);

	//Methods
	void addOrder(Order& order);
	void displayOrder();
	double calculateTotalPrice();

	//Getters and setters
	string getUsername();
	void setUsername(string username);

private:

	//Attributes
	string username;
	vector<Order> orders;
};
#endif 

