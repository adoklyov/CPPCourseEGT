#ifndef ORDER_H
#define ORDER_H

#include "Drinks.h"
#include <string>
#include <vector>

using namespace std;

class Order
{
public:

	//Constructor
	Order(vector<Drinks*> drinks, string date);
	Order();

	//Methods
	double calculateTotalPrice();
	vector<Drinks*>& getDrinks();
	void addDrink(Drinks* drink);
	void printOrder();

private:

	//Attributes
	vector<Drinks*> drinks;
	string date;
};

#endif 