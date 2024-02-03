#include "Car.h"

class LuxuryCar : public Car
{
public:

    //Constructor
    LuxuryCar(string make, string model, string type, string colour,
        string chassisNumber, string carNumber, double fuelConsumption,
        double usageFee, double distanceTravelled, double optionalExtrasFee);

    //Methods
    double calculatePrice() const;

private:

    //Attributes
    double optionalExtrasFee;

};