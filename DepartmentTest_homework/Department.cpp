#include "Department.h"
#include <iostream>

//Constructor
Department::Department(string name, int capacity) {
	this->name = name;
	this->capacity = capacity;
	employees = new Employee*[capacity];
}

//Methods

//Method to add an employee to the department
void Department::addEmployee(Employee* employee) {
	if (numberOfEmployees >= capacity) {
		cout << "Department is full" << endl;
	}
	else {
		employees[numberOfEmployees] = employee;
		numberOfEmployees++;
	}
}

//Method to print the department's information
void Department::displayEmployees() {
	cout << "Department: " << name << endl;
	cout << "Capacity: " << capacity << endl;
	cout << "Number of employees: " << numberOfEmployees << endl;
	cout << "Employees: " << endl;
	for (int i = 0; i < numberOfEmployees; i++) {
		employees[i]->displayEmployee();
	}
}