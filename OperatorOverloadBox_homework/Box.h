#ifndef BOX_H
#define BOX_H

class Box {
public:
	Box(double width, double length, double height);

	//Setters and Getters
	void setLength(double length);
	void setHeight(double height);
	void setWidth(double width);

	double getWidth() const;
	double getLength() const;
	double getHeight() const;
	
	//Operator

private:
	double width;
	double length;
	double height;
};

#endif
