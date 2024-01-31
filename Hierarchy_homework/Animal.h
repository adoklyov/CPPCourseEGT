#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal
{
public:
	Animal(string name);
	virtual ~Animal();

	virtual void speak();

	void setName(string name);
	string getName();
protected:
	string name;
};

#endif