#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:

	//Constructor
	Account(double);

	//Methods
	virtual void credit(double);
	virtual void debit(double);

	//Getters and setters
	double getBalance() const;

protected:

	//Attributes
	double balance;
};

#endif