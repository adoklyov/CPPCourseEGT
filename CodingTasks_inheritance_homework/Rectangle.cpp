#include "Rectangle.h"
#include <iostream>

//Constructor
Rectangle::Rectangle(string color) : Shape(color) {
}

//Methods

//Method to draw a rectangle
void Rectangle::draw() {
	cout << "Drawing a " << color << " rectangle" << endl;
}
