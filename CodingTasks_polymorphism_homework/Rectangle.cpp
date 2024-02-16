#include "Rectangle.h"
#include <iostream>

//Constructor
Rectangle::Rectangle(string color, double width, double height) : Shape(color) {
}

//Methods

//Method to draw a rectangle
void Rectangle::draw() {
	cout << "Drawing a " << color << " rectangle" << endl;
}

//Method to calculate the area of a rectangle
double Rectangle::area() {
	return width * height;
}