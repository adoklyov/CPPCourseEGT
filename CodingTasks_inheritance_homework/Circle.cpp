#include "Circle.h"
#include <iostream>

//Constructor
Circle::Circle(string color) : Shape(color) {
}

//Methods

//Method to draw a circle
void Circle::draw() {
	cout << "Drawing a " << color << " circle" << endl;
}