#include "Employee.h"

//Constructor
Employee::Employee(string name, string type, int age)
{
	this->name = name;
	this->type = type;
	this->age = age;
}

//Getters
string Employee::getName()
{
	return name;
}

string Employee::getType()
{
	return type;
}

int Employee::getAge()
{
	return age;
}