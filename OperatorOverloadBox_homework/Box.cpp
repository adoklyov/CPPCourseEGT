#include "Box.h"

//Constructor
Box::Box(double width, double length, double height)
{
	this->width = width;
	this->length = length;
	this->height = height;
}

//Setters and Getters
void Box::setHeight(double height)
{
	this->height = height;
}

double Box::getHeight() const
{
	return height;
}

void Box::setWidth(double width)
{
	this->width = width;
}

double Box::getWidth() const
{
	return width;
}

void Box::setLength(double length)
{
	this->length = length;
}

double Box::getLength() const
{
	return length;
}

//Overloaded addition operator
Box Box::operator+(const Box& box) const
{
	Box testBox(0, 0, 0);
	testBox.setHeight(this->height + box.height);
	testBox.setLength(this->length + box.length);
	testBox.setWidth(this->width + box.width);
	return testBox;
}