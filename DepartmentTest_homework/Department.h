#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Employee.h"

#include <string>

class Department
{
public:

	//Constructor
	Department(string name, int capacity);

	//Methods
	void addEmployee(Employee* employee);
	void displayEmployees();

	//Attributes
	string name;
	int capacity;
	Employee** employees;
	int numberOfEmployees;

};

#endif
