#include "Car.h"

//Constructor
Car::Car(string make, string model, string type, string colour,
    string chassisNumber, string carNumber, double fuelConsumption,
    double usageFee, double distanceTravelled)
    : make(make), model(model), type(type), colour(colour),
    chassisNumber(chassisNumber), carNumber(carNumber),
    fuelConsumption(fuelConsumption), usageFee(usageFee),
    distanceTravelled(distanceTravelled) {}