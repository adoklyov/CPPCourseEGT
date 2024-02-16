#ifndef SHAPE_H
#define SHAPE_H
#include <string>

using namespace std;

class Shape {

public:

	//Constructor
	Shape(string color);

	//Methods
	virtual void draw() = 0;
	virtual double area() = 0;

protected:

	//Attributes
	string color;

};

#endif