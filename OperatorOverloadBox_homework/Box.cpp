#include "Box.h"
#include <iostream>

using namespace std;

Box::Box(double w, double l, double h)
{

}


//Setters and Getters
void Box::setHeight(double h)
{
	height = h;
}

double Box::getHeight() const
{
	return height;
}

void Box::setWidth(double w)
{
	width = w;
}

double Box::getWidth() const
{
	return width;
}

void Box::setLength(double l)
{
	length = l;
}

double Box::getLength() const
{
	return length;
}

//Operator