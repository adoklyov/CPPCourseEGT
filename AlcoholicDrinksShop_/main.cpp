#include <iostream>
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include "Customer.h"
#include "Order.h"
#include "Shop.h"

using namespace std;

int main() {

    //Create some drinks
    Alcoholic* wine = new Alcoholic("Red Wine", 20.0, 1, "Wine", 0.75, 5.0);
    NonAlcoholic* coffee = new NonAlcoholic("Coffee", 3.0, 2, "Coffee", 0.2, 0.5);
    Alcoholic* whiskey = new Alcoholic("Whiskey", 50.0, 1, "Whiskey", 0.7, 10.0);

    //Create an order and add drinks to it
    Order firstOrder;
    firstOrder.addDrink(wine);
    firstOrder.addDrink(coffee);

    //Create another order and add drinks to it
    Order secondOrder;
    secondOrder.addDrink(whiskey);

    //Create a user and add orders to the user
    Customer c1("Ibrahim");
    c1.addOrder(firstOrder);

    //Print user's orders and total expenditure
    c1.displayOrder();
    cout << "Total expenditure for " << c1.getUsername() << ": $" << c1.calculateTotalPrice() << endl;

    //Display drinks by type test
    vector<Customer> customers;
    customers.push_back(c1);
    Shop shop(customers);
    shop.drinkByType();

    //Display the best customer test
    cout << "The best customer is: " << shop.getBestCustomer().getUsername() << endl;

    return 0;

}