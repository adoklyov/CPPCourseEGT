#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car {

public:

    //Constructor
    Car(string make, string model, string type, string colour,
        string chassisNumber, string carNumber, double fuelConsumption,
        double usageFee, double distanceTravelled);

    //Methods
    virtual double calculatePrice() const = 0;

protected:

    //Attributes
    string make;
    string model;
    string type;
    string colour;
    string chassisNumber;
    string carNumber;
    double fuelConsumption;
    double usageFee;
    double distanceTravelled;

};

#endif 