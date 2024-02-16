#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {

	//Shape objects
	Circle circle("red");
	Rectangle rectangle("blue");

	//Method to draw shapes
	circle.draw();
	rectangle.draw();

	return 0;
}