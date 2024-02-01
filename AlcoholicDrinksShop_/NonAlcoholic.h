#ifndef NONALCOHOLIC_H
#define NONALCOHOLIC_H

#include "Drinks.h"


class NonAlcoholic : public Drinks
{
public:
	//Constructor
	NonAlcoholic(string name, double price, int quantity, double litres, double cityTax);
	
	//Methods
	double calculatePrice() override;
	void print() override;

	//Getters and setters
	void setLitres(double litres);
	void setCityTax(double cityTax);

	double getLitres();
	double getCityTax();

private:
	double litres;
	double cityTax;
};

#endif 