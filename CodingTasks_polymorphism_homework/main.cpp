#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

//Function to print the area of a shape
void printArea(Shape* shape) {
	cout << "Area: " << shape->area() << endl;
}

int main() {

	//Shape objects
	Circle circle("red", 5.1);
	Rectangle rectangle("blue", 4.5, 5.5);

	//Call print function
	printArea(&circle);
	printArea(&rectangle);

	return 0;
}