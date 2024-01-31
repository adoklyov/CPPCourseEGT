#ifndef DRINKS_H
#define DRINKS_H

#include <iostream>
#include <string>

using namespace std;

class Drinks
{
public:

	Drinks(string name, double price, int quantity);

	virtual double calculatePrice() = 0;
	virtual void print() = 0;

	string getName();
	double getPrice();
	int getQuantity();

protected:
	string name;
	double price;
	int quantity;

public:

	Drinks() = default;
};

#endif // !DRINKS_H
