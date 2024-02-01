#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal
{
public:
	//Constructor
	Cat(string name);

	//Method
	void speak() override;
};

#endif 