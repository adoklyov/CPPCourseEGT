#ifndef ORDER_H
#define ORDER_H

#include "Drinks.h"
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Order
{
public:

	double calculateTotalPrice();
	void print();
	
	Order(vector<Drinks*> drinks, string date);

	vector<Drinks*> getDrinks();

private:
	vector<Drinks*> drinks;
	string date;
};

#endif // !ORDER_H