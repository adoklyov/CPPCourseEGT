#include <iostream>

using namespace std;

int main()
{
	//User inputs the amount of numbers
	int amount, number;
	cin >> amount;

	//Loop for the amount of numbers
	for (int i = 0; i < amount; i++)
	{
		cin >> number;

		//Checks if the number is even or odd
		if (number % 2 == 0)
			cout << "even" << endl;
		else
			cout << "odd" << endl;
	}

	return 0;
}
