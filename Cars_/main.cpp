#include <iostream>
#include <vector>
#include "FamilyCar.h"
#include "LuxuryCar.h"

using namespace std;

int main() {

    //Vector to store car objects
    vector<Car*> cars;

    //Create family cars
    cars.push_back(new FamilyCar("Toyota", "Camry", "Sedan", "Red", "ABC123", "XYZ789", 8.5, 50, 450));
    cars.push_back(new FamilyCar("Honda", "Civic", "Hatchback", "Blue", "DEF456", "UVW123", 7.2, 40, 600));
    cars.push_back(new FamilyCar("Ford", "Fusion", "Sedan", "Silver", "MNO789", "PQR012", 8.0, 45, 500));
    cars.push_back(new FamilyCar("Chevrolet", "Cruze", "Sedan", "Black", "STU345", "EFG678", 7.8, 55, 400));

    //Create luxury cars with optional extras
    cars.push_back(new LuxuryCar("Mercedes", "S-Class", "Sedan", "Black", "GHI789", "RST456", 9.8, 100, 150, 100));
    cars.push_back(new LuxuryCar("BMW", "7 Series", "Sedan", "White", "JKL012", "OPQ345", 9.5, 120, 250, 50));
    cars.push_back(new LuxuryCar("Audi", "A8", "Sedan", "Grey", "STU678", "VWX901", 9.3, 110, 200, 75));
    cars.push_back(new LuxuryCar("Porsche", "Panamera", "Sedan", "Red", "YZA234", "BCD567", 10.0, 150, 300, 25));

    //Calculate and display rental price for each car
    for (const auto& car : cars) {
        cout << "Rental Price: " << car->calculatePrice() << " BGN" << std::endl;
    }

    return 0;
}