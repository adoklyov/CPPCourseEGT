#include "Customer.h"


//Constructor
Customer::Customer(string username) : username(username)
{

}

//Getters and setters
string Customer::getUsername()
{
	return username;
}

void Customer::setUsername(string username)
{
	this->username = username;
}

//Methods
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