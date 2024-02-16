#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {

public:
	//Constructor
	Rectangle(string color, double width, double height);

	//Methods
	void draw() override;
	double area() override;

private:

	//Attributes
	double width = 4.5;
	double height = 5.5;

};

#endif