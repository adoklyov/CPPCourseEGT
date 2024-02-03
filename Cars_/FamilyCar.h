#include "Car.h"

class FamilyCar : public Car
{
public:

    //Constructor
    FamilyCar(string make, string model, string type, string colour,
        string chassisNumber, string carNumber, double fuelConsumption,
        double usageFee, double distanceTravelled);

    //Methods
    double calculatePrice() const;

};