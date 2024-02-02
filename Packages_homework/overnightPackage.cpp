#include "OvernightPackage.h"

//Constructor
OvernightPackage::OvernightPackage(string senderAddress, string recipientAddress,
    double weight, double costPerKg, double extraFee)
    : Package(senderAddress, recipientAddress, weight, costPerKg)
{

    this->extraFeePerKg = extraFeePerKg;
}


//Method for calculating overnight package cost, overriding the base class method
double OvernightPackage::calculateCost() const {
    return weight * (costPerKg + extraFeePerKg);
}