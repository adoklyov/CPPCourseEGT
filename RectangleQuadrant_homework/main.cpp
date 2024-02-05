#include <iostream>

using namespace std;

int main() {

	//Variables
	double length, width;

	//User input of length and width
	cout << "Enter the length and width of a rectangle: ";
	cin >> length >> width;

	//Checks if the rectangle is a square or not
	if (length != width) {
		cout << "The rectangle is not a square." << endl;
	}
	else {
		cout << "The rectangle is a square." << endl;
	}

	//Check if the rectangle is in first quadrant
	if (length > 0 && width > 0) {
		cout << "The rectangle is in the first quadrant." << endl;
	}
	else {
		cout << "The rectangle is not in the first quadrant." << endl;
	}

	//Calculates the area and perimeter of the rectangle
	double area = length * width;
	double perimeter = 2 * (length + width);

	cout << "Area of the rectangle: " << area << endl;
	cout << "Perimeter of the rectangle: " << perimeter << endl;

	return 0;
}