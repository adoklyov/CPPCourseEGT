#ifndef NONALCOHOLIC_H
#define NONALCOHOLIC_H

#include "Drinks.h"
#include <string>

class NonAlcoholic : public Drinks
{
public:

	//Constructor
	NonAlcoholic(string name, double price, int quantity, string type, double litres, double cityTax);

	//Methods
	double calculatePrice() override;
	void print() override;

private:

	//Attributes
	double litres;
	double cityTax;

};

#endif 