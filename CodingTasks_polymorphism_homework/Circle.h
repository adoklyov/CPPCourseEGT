#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {

public:

	//Constructor
	Circle(string color, double radius);

	//Methods
	void draw() override;
	double area() override;

private:

	//Attributes
	double radius = 5.0;

};

#endif