#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

using namespace std;

class Package {

public:

    //Constructor
    Package(string senderAddress, string recipientAddress, double weight, double costPerKg);

    //Methods
    virtual double calculateCost() const;

    //Getters
    string getSenderAddress() const;
    string getRecipientAddress() const;

protected:

    //Attributes
    string senderAddress;
    string recipientAddress;
    double weight;
    double costPerKg;

};

#endif