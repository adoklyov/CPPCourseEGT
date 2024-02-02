#include <iostream>
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include "Customer.h"
#include "Order.h"

using namespace std;

int main() {
    // Create some drinks
    Alcoholic* wine = new Alcoholic("Red Wine", 20.0, 1, "Wine", 0.75, 5.0);
    NonAlcoholic* coffee = new NonAlcoholic("Coffee", 3.0, 2, "Coffee", 0.2, 0.5);
    Alcoholic* whiskey = new Alcoholic("Whiskey", 50.0, 1, "Whiskey", 0.7, 10.0);

    // Create an order and add drinks to it
    Order firstOrder;
    firstOrder.addDrink(wine);
    firstOrder.addDrink(coffee);

    Order secondOrder;
    secondOrder.addDrink(whiskey);

    // Create a user and add orders to the user
    Customer c1("Ibrahim");
    c1.addOrder(firstOrder);
    c1.addOrder(secondOrder);

    // Print user's orders and total expenditure
    cout << "Printing orders for " << c1.getUsername() << endl;
    c1.displayOrder();
    cout << "Total expenditure for " << c1.getUsername() << ": $" << c1.calculateTotalPrice() << endl;

    return 0;
}