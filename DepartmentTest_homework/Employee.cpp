#include "Employee.h"

#include <iostream>

using namespace std;

//Constructor
Employee::Employee(string name, int ID, string position){
	this->name = name;
	this->ID = ID;
	this->position = position;
}

//Methods

//Method to display the employee's information
void Employee::displayEmployee(){
	cout << "Name: " << name << endl;
	cout << "ID: " << ID << endl;
	cout << "Position: " << position << endl;
}