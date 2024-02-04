#include "CheckingAccount.h"

//Constructor
CheckingAccount::CheckingAccount(double initialBalance, double fee)
	: Account(initialBalance)
{
	fee = 0.0;
}

//Methods

//Method to credit the account
void CheckingAccount::credit(double amount)
{
	Account::credit(amount);
	feeCharge();
}

//Method to debit the account
void CheckingAccount::debit(double amount)
{
	Account::debit(amount);
	feeCharge();
}

//Method to charge the fee
void CheckingAccount::feeCharge()
{
	double balance = getBalance();
	balance = balance - fee;
}