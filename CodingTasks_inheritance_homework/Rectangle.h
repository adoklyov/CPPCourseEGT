#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {

public:
	//Constructor
	Rectangle(string color);

	//Methods
	void draw() override;
};

#endif