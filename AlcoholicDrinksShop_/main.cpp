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

    //Display customers with orders containing a drink of a given type
    string type = "Coffee";
    vector<Customer> customersWithDrinkType = shop.getCustomerDrinkType(type);
    cout << "Customers with orders containing " << type << ": ";
    for (Customer& customer : customersWithDrinkType) {
        cout << customer.getUsername() << " ";
    }
    cout << endl;

    /*Display the top 10 customers
    vector<Customer> top10Customers = shop.getTop10Customers();
    cout << "Top 10 customers: ";
    for (size_t i = 0; i < top10Customers.size() && i < 10; ++i) {
        cout << top10Customers[i].getUsername() << " ";
     }
        cout << endl;
    */

    return 0;

}