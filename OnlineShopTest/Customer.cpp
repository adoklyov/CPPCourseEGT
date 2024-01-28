#include "Customer.h"
#include <iostream>

Customer::Customer(string username) : username(username)
{

}

void Customer::addOrder(Order& order)
{
	orders.push_back(order);
}

void Customer::displayOrder()
{
	cout << "Customer: " << username << endl;
	for (auto& order : orders) {
		order.print();
		cout << "-----------------------------------" << endl;
	}
}

vector<Order> Customer::getOrders()
{
	return orders;
}