#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account
{
public:

	//Constructor
	CheckingAccount(double, double);

	//Methods
	void credit(double);
	void debit(double);

private:

	//Attributes
	double fee;
	void feeCharge();
};
#endif