#include "twoDayPackage.h"
#include "package.h"
#include <iostream>

//Constructor
twoDayPackage::twoDayPackage(const string& sname, const string& saddress, const string& scity, const string& sstate, const string& szip,
	const string& rname, const string& raddress, const string& rcity, const string& rstate, const string& rzip,
	double weight, double cpounce, double flatf)
	: Package(sname, saddress, scity, sstate, szip, rname, raddress, rcity, rstate, rzip, weight, cpounce),
	flatFee(flatf)

{
	if (flatf <= 0) {
		throw invalid_argument("Flat fee must be positive.");
	}
}

//Getters and setters
double twoDayPackage::getFlatFee() const {
	return flatFee;
}

void twoDayPackage::setFlatFee(double flatf) {
	if (flatf <= 0)
	{
		throw invalid_argument("Flat fee must be positive.");
	}
	flatFee = flatf;
}


//Methods
double twoDayPackage::calculateCost() const {
	return Package::calculateCost() + flatFee;
}

void twoDayPackage::print() const {
	Package::print();
	cout << "Flat fee: " << flatFee << endl;
}