#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package {

public:

    //Constructor
    OvernightPackage(string senderAddress, string recipientAddress, double weight, double costPerKg, double extraFee);

    //Methods
    double calculateCost() const override;

private:

    //Attributes
    double extraFeePerKg;
};

#endif