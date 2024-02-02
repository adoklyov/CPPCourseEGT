#include "TwoDayPackage.h"

//Constructor
TwoDayPackage::TwoDayPackage(string senderAddress, string recipientAddress, double weight, double costPerKg, double fee)
    : Package(senderAddress, recipientAddress, weight, costPerKg)
{

    this->flatFee = flatFee;

}

//Method for calculating two day package cost, overriding the base class method
double TwoDayPackage::calculateCost() const {
    return Package::calculateCost() + flatFee;
}