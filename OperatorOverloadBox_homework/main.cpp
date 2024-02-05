#include <iostream>

#include "Box.h"

using namespace std;

int main()
{
	//Create two boxes
	Box box1(10, 10, 10);
	Box box2(5, 5, 5);

	//Add two boxes
	Box box3 = box1 + box2;

	//Display the result
	cout << "Box 3 Result: " << box3.getWidth() << " , " << box3.getLength() << " , " << box3.getHeight() << endl;

	return 0;
}