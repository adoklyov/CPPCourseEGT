#include "Circle.h"
#include <iostream>

//Constructor
Circle::Circle(string color, double radius) : Shape(color) {
}

//Methods

//Method to draw a circle
void Circle::draw() {
	cout << "Drawing a " << color << " circle" << endl;
}

//Method to calculate the area of a circle
double Circle::area() {
	return 3.1416 * radius * radius;
}