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

	//Balance getter
	double getBalance() const;

protected:

	//Attributes
	double balance;
};

#endif