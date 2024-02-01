#ifndef DRINKS_H
#define DRINKS_H

#include <iostream>
#include <string>

using namespace std;

class Drinks
{
public:
	//Constructor
	Drinks(string name, double price, int quantity);

	//Methods
	virtual double calculatePrice() = 0;
	virtual void print() = 0;

	//Getters and setters
	void setName(string name);
	void setPrice(double price);
	void setQuantity(int quantity);

	string getName();
	double getPrice();
	int getQuantity();

protected:
	string name;
	double price;
	int quantity;

};

#endif 
