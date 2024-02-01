#include "package.h"
#include "overnightPackage.h"
#include <iostream>

//Constructor
overnightPackage::overnightPackage(const string& sname, const string& saddress, const string& scity, const string& sstate, const string& szip,
	const string& rname, const string& raddress, const string& rcity, const string& rstate, const string& rzip,
	double weight, double cpounce, double fpounce)
	: Package(sname, saddress, scity, sstate, szip, rname, raddress, rcity, rstate, rzip, weight, cpounce),
	feePerOunce(fpounce)

{
	if (fpounce <= 0) {
		throw invalid_argument("Fee per ounce must be positive.");
	}
}

//Getters and setters
double overnightPackage::getFeePerOunce() const {
	return feePerOunce;
}

void overnightPackage::setFeePerOunce(double fpounce) {
	if (fpounce <= 0)
	{
		throw invalid_argument("Fee per ounce must be positive.");
	}
	feePerOunce = fpounce;
}


//Methods
void overnightPackage::print() const {
	Package::print();
	cout << "Fee per ounce: " << feePerOunce << endl;
}

double overnightPackage::calculateCost() const {
	return Package::calculateCost() + feePerOunce;
}