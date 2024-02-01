#include <iostream>
#include "package.h"

using namespace std;

//Constructor
Package::Package(const string& sname, const string& saddress, const string& scity, const string& sstate, const string& szip,
	const string& rname, const string& raddress, const string& rcity, const string& rstate, const string& rzip,
	double weight, double cpounce)
{
	setWeight(weight);
	setCostPerOunce(cpounce);

}

//Getters and setters
void Package::setSenderName(const string& sname)
{
	senderName = sname;
}


string Package::getSenderName() const
{
	return senderName;
}


void Package::setSenderAddress(const string& saddress)
{
	senderAddress = saddress;
}


string Package::getSenderAddress() const
{
	return senderAddress;
}


void Package::setSenderCity(const string& scity)
{
	senderCity = scity;
}


string Package::getSenderCity() const
{
	return senderCity;
}


void Package::setSenderState(const string& sstate)
{
	senderState = sstate;
}


string Package::getSenderState() const
{
	return senderState;
}


void Package::setSenderZip(const string& szip)
{
	senderZip = szip;
}


string Package::getSenderZip() const
{
	return senderZip;
}


void Package::setRecipientName(const string& rname)
{
	recipientName = rname;
}


string Package::getRecipientName() const
{
	return recipientName;
}


void Package::setRecipientAddress(const string& raddress)
{
	recipientAddress = raddress;
}


string Package::getRecipientAddress() const
{
	return recipientAddress;
}


void Package::setRecipientCity(const string& rcity)
{
	recipientCity = rcity;
}


string Package::getRecipientCity() const
{
	return recipientCity;
}


void Package::setRecipientState(const string& rstate)
{
	recipientState = rstate;
}


string Package::getRecipientState() const
{
	return recipientState;
}


void Package::setRecipientZip(const string& rzip)
{
	recipientZip = rzip;
}


string Package::getRecipientZip() const
{
	return recipientZip;
}


void Package::setWeight(double weight)
{
	if (weight <= 0)
	{
		throw invalid_argument("Weight must be positive.");
	}
	w = weight;
}


double Package::getWeight() const
{
	return w;
}


void Package::setCostPerOunce(double cpounce)
{
	if (cpounce <= 0)
	{
		throw invalid_argument("Cost per ounce must be positive.");
	}
	costPerOunce = cpounce;
}


double Package::getCostPerOunce() const
{
	return costPerOunce;
}

//Methods
double Package::calculateCost() const
{
	return w * costPerOunce;
}


void Package::print() const
{
	cout << "Sender name: " << senderName << endl;
	cout << "Sender address: " << senderAddress << endl;
	cout << "Sender city: " << senderCity << endl;
	cout << "Sender state: " << senderState << endl;
	cout << "Sender zip: " << senderZip << endl;
	cout << "Recipient name: " << recipientName << endl;
	cout << "Recipient address: " << recipientAddress << endl;
	cout << "Recipient city: " << recipientCity << endl;
	cout << "Recipient state: " << recipientState << endl;
	cout << "Recipient zip: " << recipientZip << endl;
	cout << "Weight: " << w << endl;
	cout << "Cost per ounce: " << costPerOunce << endl;
}