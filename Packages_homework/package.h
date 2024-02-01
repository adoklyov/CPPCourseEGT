#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
#include <iostream>

using namespace std;

class Package {

public:

	//Constructor
	Package(const string&, const string&, const string&, const string&, const string&,
		const string&, const string&, const string&, const string&, const string&, double, double);

	//Methods
	virtual double calculateCost() const;
	virtual void print() const;

	//Getters and setters
	void setSenderName(const string&);
	void setSenderAddress(const string&);
	void setSenderCity(const string&);
	void setSenderState(const string&);
	void setSenderZip(const string&);
	void setRecipientName(const string&);
	void setRecipientAddress(const string&);
	void setRecipientCity(const string&);
	void setRecipientState(const string&);
	void setRecipientZip(const string&);
	void setWeight(double);
	void setCostPerOunce(double);

	string getSenderName() const;
	string getSenderAddress() const;
	string getSenderCity() const;
	string getSenderState() const;
	string getSenderZip() const;
	string getRecipientName() const;
	string getRecipientAddress() const;
	string getRecipientCity() const;
	string getRecipientState() const;
	string getRecipientZip() const;
	double getWeight() const;
	double getCostPerOunce() const;

private:
	string senderName;
	string senderAddress;
	string senderCity;
	string senderState;
	string senderZip;

	string recipientName;
	string recipientAddress;
	string recipientCity;
	string recipientState;
	string recipientZip;

	double w;
	double costPerOunce;

};

#endif