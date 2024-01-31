#ifndef NONALCOHOLIC_H
#define NONALCOHOLIC_H

#include "Drinks.h"
#include <iostream>

class NonAlcoholic : public Drinks
{
public:
	NonAlcoholic(string name, double price, int quantity, double litres, double cityTax);

	double calculatePrice() override;
	void print() override;

private:
	double litres;
	double cityTax;
};

#endif // !NONALCOHOLIC_H