#include "Account.h"
#include <iostream>

using namespace std;

// Constructor
Account::Account(double initialBalance)
{

	if (initialBalance >= 0.0)
	{
		balance = initialBalance;
	}
	else
	{
		balance = 0.0;
		cout << "Initial balance was invalid." << endl;
	}
}

//Methods

//Method to credit the account
void Account::credit(double amount)
{
	balance = balance + amount;
}


//Method to debit the account
void Account::debit(double amount)
{
	if (amount > balance)
	{
		cout << "Debit amount exceeded account balance." << endl;
	}
	else
	{
		balance = balance - amount;
	}
}

//Getters and setters
double Account::getBalance() const
{
	return balance;
}