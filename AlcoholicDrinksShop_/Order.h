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

	//Methods
	double calculateTotalPrice();
	void print();
	
	//Getters and setters
	void setDrinks(vector<Drinks*> drinks);
	void setDate(string date);

	string getDate();	
	vector<Drinks*> getDrinks();

private:

	vector<Drinks*> drinks;
	string date;
};

#endif 