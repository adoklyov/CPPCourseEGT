#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {

public:

	//Constructor
	Circle(string color);

	//Methods
	void draw() override;

};

#endif