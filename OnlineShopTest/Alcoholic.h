#ifndef ALCHOLIC_H
#define ALCHOLIC_H

#include "Drinks.h"
#include <iostream>

class Alcoholic : public Drinks
{
public:
	Alcoholic(string name, double price, int quantity, double volume, double tax);

	double calculatePrice() override;
	void print() override;

private:
	double volume;
	double tax;
};

#endif