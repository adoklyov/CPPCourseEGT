#ifndef ALCHOLIC_H
#define ALCHOLIC_H

#include "Drinks.h"
#include <iostream>

class Alcoholic : public Drinks
{
public:

	//Constructor
	Alcoholic(string name, double price, int quantity, double volume, double tax);

	//Overriden methods
	double calculatePrice() override;
	void print() override;

	//Getters and Setters
	void setVolume(double volume);
	void setTax(double tax);

	double getVolume();
	double getTax();

private:
	double volume;
	double tax;
};

#endif