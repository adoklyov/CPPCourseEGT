#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "package.h"
#include <iostream>

using namespace std;

class overnightPackage : public Package {

public:

    //Constructor
    overnightPackage(const string&, const string&, const string&, const string&, const string&,
        const string&, const string&, const string&, const string&, const string&, double, double, double);

    //Methods
    double calculateCost() const override;
    virtual void print() const;

    //Getters and setters
    double getFeePerOunce() const;
    void setFeePerOunce(double fpounce);

private:
    double feePerOunce;
};

#endif
