#include "SavingsAccount.h"

//Constructor
SavingsAccount::SavingsAccount(double initialBalance, double rate)
	: Account(initialBalance)
{
	interestRate = rate;
}

//Methods

//Method to calculate interest based on the interest rate
double SavingsAccount::calculateInterest() const
{
	return getBalance() * interestRate;
}