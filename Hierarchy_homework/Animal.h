#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

using namespace std;

class Animal
{
public:

	//Constructor
	Animal(string name);

	//Method
	virtual void speak();

	//Getters and setters
	void setName(string name);
	string getName();

protected:

	//Attributes
	string name;
};

#endif