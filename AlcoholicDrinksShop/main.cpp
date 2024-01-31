#include "Drinks.h"
#include "Order.h"
#include "Customer.h"
#include "Shop.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	Shop shop("The Shop");

	Alcoholic beer("Beer", 2.5, 3, 10, 5);
	NonAlcoholic cola("Cola", 1.5, 2, 5, 10);

	vector<Drinks*> drink;
	drink.push_back(new Alcoholic("Whiskey",19.99, 5, 0.7, 15.0));
	drink.push_back(new NonAlcoholic("Coca Cola", 1.99, 5, 0.5, 10.0));

	Order order1(drink, "21.12.1999");
	Order order2(drink, "11.12.1999");

	Customer customer1("John Doe");
	customer1.addOrder(order1);

	shop.addCustomer(customer1);

	shop.displayCustomers();

	//shop.addCustomer(customer1);

	//shop.displayCustomers();

	/*cout << "Alcoholic drinks sold:" << shop.typeOfDrinksSold("Alcoholic") << endl;
	cout << "Non alcoholic drinks sold:" << shop.typeOfDrinksSold("NonAlcoholic") << endl;*/

	return 0;
}