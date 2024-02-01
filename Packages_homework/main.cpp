#include <iostream>
#include "Package.h"
#include "overnightPackage.h"
#include "twoDayPackage.h"

using namespace std;

int main() {

	Package p1("John Smith", "1 Main St", "Boston", "MA", "02108",
		"Jane Doe", "7 Elm St", "New York", "NY", "01234",
		10, 2.5);
	twoDayPackage tdp2("Alice Cooper", "2 Oak St", "Chicago", "IL", "12345",
		"Bob Dylan", "8 Pine St", "Seattle", "WA", "54321",
		15, 4.5, 3);
	overnightPackage onp3("John Lennon", "3 Maple St", "San Francisco", "CA", "98765",
		"Paul McCartney", "9 Cedar St", "Portland", "OR", "56789",
		20, 3, 2);

	cout << "Package 1 cost: " << p1.calculateCost() << endl;

	cout << "Package 2 cost: " << tdp2.calculateCost() << endl;

	cout << "Package 3 cost: " << onp3.calculateCost() << endl;

	return 0;
}