#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Order.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Customer
{
public:

	Customer(string username);

	void addOrder(Order& order);
	void displayOrder();

	vector<Order> getOrders();

private:

	string username;
	vector<Order> orders;
};
#endif // !CUSTOMER_H

