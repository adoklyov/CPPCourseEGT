#include "Customer.h"
#include <iostream>

using namespace std;

//Constructor
Customer::Customer(string username)
{
    this->username = username;
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

vector<Order>& Customer::getOrders()
{
    return orders;
}

//Methods

//Method to add an order to the customer
void Customer::addOrder(Order& order)
{
    orders.push_back(order);
}

//Method to display the orders of the customer
void Customer::displayOrder() {
    std::cout << "Customer: " << username << std::endl;
    for (Order& order : orders) {
        order.printOrder(); // Ensure printOrder is correctly implemented in Order
    }
    std::cout << "--------------------------" << std::endl;
}

//Method to calculate the total price of the orders
double Customer::calculateTotalPrice() {
    double totalPrice = 0;
    for (auto& order : orders) {
        totalPrice += order.calculateTotalPrice(); // Ensure calculateTotalPrice is correctly implemented in Order
    }
    std::cout << "Total price of the orders: " << totalPrice << std::endl;
    return totalPrice;
}