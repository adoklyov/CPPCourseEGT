#include "Package.h"


//Constructor
Package::Package(string senderAddress, string recipientAddress, double weight, double costPerKg)
{
    this->senderAddress = senderAddress;
    this->recipientAddress = recipientAddress;
    this->weight = weight;
    this->costPerKg = costPerKg;
}

//Getters
string Package::getSenderAddress() const {
    return senderAddress;
}
string Package::getRecipientAddress() const {
    return recipientAddress;
}

//Method for calculating package cost
double Package::calculateCost() const {
    return weight * costPerKg;
}