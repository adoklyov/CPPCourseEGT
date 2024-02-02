#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

using namespace std;

class TwoDayPackage : public Package {

public:

    //Constructor
    TwoDayPackage(string senderAddress, string recipientAddress, double weight, double costPerKg, double fee);

    //Methods
    double calculateCost() const override;

private:

    //Attributes
    double flatFee;
};

#endif