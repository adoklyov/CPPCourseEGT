#include "FamilyCar.h"

//Constructor
FamilyCar::FamilyCar(string make, string model, string type, string colour,
    string chassisNumber, string carNumber, double fuelConsumption,
    double usageFee, double distanceTravelled)
    : Car(make, model, type, colour, chassisNumber, carNumber, fuelConsumption, usageFee, distanceTravelled) {}


//Methods

//Method to calculate the rental price for a family car
double FamilyCar::calculatePrice() const {
    double coefficient = distanceTravelled < 500 ? 0.7 : 0.4;
    return usageFee * coefficient;
}