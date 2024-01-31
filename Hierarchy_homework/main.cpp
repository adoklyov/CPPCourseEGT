#include <iostream>
#include <string>

#include "Dog.h"
#include "Cat.h"

using namespace std;

int main()
{
	//Animal pointer
	Animal* animal;
	
	//Dog created and speak called
	animal = new Dog("Darius") ;
	animal->speak();
	delete animal;

	//Cat created and speak called
	animal  = new Cat("Mimi");
	animal->speak();
	delete animal;

	return 0;
}