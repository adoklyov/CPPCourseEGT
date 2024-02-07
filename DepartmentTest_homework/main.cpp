#include "Employee.h"
#include "Department.h"
#include <iostream>

using namespace std;

int main()
{
	//Created 5 employees
	Employee *e1 = new Employee("Ivan Stoyanov", 1 , "Manager");
    Employee *e2 = new Employee("Stoyan Ivanov", 2 , "Developer");
	Employee *e3 = new Employee("Ivan Ivanov", 3 , "KYC");
	Employee *e4 = new Employee("Stoyan Stoyanov", 4 , "Team Lead");
	Employee *e5 = new Employee("Ivana Stoyanova", 5 , "Technical Support");

	//Department creation
	Department department("CS" , 4);

	//Adding employees to the department
	department.addEmployee(e1);
	department.addEmployee(e2);
	department.addEmployee(e3);
	department.addEmployee(e4);

	//Unable to add as capacity will be exceeded
	department.addEmployee(e5);

	//Printing the department information
	department.displayEmployees();

	return 0;

}


