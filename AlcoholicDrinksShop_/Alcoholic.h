#ifndef ALCHOLIC_H
#define ALCHOLIC_H

#include "Drinks.h"
#include <iostream>

class Alcoholic : public Drinks
{
public:

	//Constructor
	Alcoholic(string name, double price, int quantity, string type, double volume, double tax);

	//Methods
	double calculatePrice() override;
	void print() override;

private:

	//Attributes
	double volume;
	double tax;
};

#endif