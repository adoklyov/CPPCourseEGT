#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "package.h"

class twoDayPackage : public Package {

public:

    //Constructor
    twoDayPackage(const string&, const string&, const string&, const string&, const string&,
        const string&, const string&, const string&, const string&, const string&, double, double, double);

    //Methods
    double calculateCost() const override;
    virtual void print() const;

    //Getters and setters
    double getFlatFee() const;
    void setFlatFee(double flatf);

private:
    double flatFee;

};
#endif