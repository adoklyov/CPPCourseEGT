#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(string name);
	virtual ~Cat();

	void speak() override;
};

#endif // !CAT_H
