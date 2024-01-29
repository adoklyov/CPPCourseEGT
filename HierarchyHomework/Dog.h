#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(string name);
	virtual ~Dog();

	void speak() override;
};

#endif