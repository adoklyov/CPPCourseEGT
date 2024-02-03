#include "LuxuryCar.h"

//Constructor
LuxuryCar::LuxuryCar(string make, string model, string type, string colour,
    string chassisNumber, string carNumber, double fuelConsumption,
    double usageFee, double distanceTravelled, double optionalExtrasFee)
    : Car(make, model, type, colour, chassisNumber, carNumber, fuelConsumption, usageFee, distanceTravelled),
    optionalExtrasFee(optionalExtrasFee) {}

//Methods

//Method to calculate the rental price for a luxury car
double LuxuryCar::calculatePrice() const {
    double coefficient = distanceTravelled < 200 ? 0.6 : 0.4;
    return (usageFee + optionalExtrasFee) * coefficient;
}