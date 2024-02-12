#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
public:

	//Constructor
	Employee(string name, string type, int age);

	//Getters
	string getName();
	string getType();
	int getAge();

private:

	//Attributes
	string name;
	string type;
	int age;

};

#endif