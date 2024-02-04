#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account
{
public:

	//Constructor
	SavingsAccount(double, double);

	//Methods
	double calculateInterest() const;

private:

	//Attributes
	double interestRate;
};

#endif 