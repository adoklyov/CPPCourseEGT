#include "pugixml.h"
#include "Employee.h"
#include <iostream>
#include <vector>

using namespace std;
using namespace pugi;


//Task 1
vector<Employee> Employees() {

	//Vector of employees
	vector<Employee> employees;
	xml_document doc;

	//Load the new file
	if (!doc.load_file("employees.xml")) {

		cerr << "File not found!" << endl;
		return employees;

	}

	//Get the employees information
	xml_node empls = doc.child("EmployeesData").child("Employees");
	for (xml_node emp : empls.children("Employee")) {

		string name = emp.attribute("Name").value();
		string type = emp.attribute("Type").value();
		int age = emp.attribute("Age").as_int();
		employees.push_back(Employee(name, type, age));

	}

	return employees;

}

int main() {

	vector<Employee> employees = Employees();

	//Print the employees information
	for (Employee emp : employees) {

		cout << "Name: " << emp.getName() << endl;
		cout << "Type: " << emp.getType() << endl;
		cout << "Age: " << emp.getAge() << endl;
		cout << endl;

	}

	return 0;
}

//Task 2 TBD


/*
int main()
{
	xml_document doc;

	if (!doc.load_file("employees.xml")) return -1;
	cout << "Employees:" << endl;
	xml_node empls = doc.child("EmployeesData").child("Employees");

	for (xml_node_iterator it = empls.begin(); it != empls.end(); ++it)
	{

		for (xml_attribute_iterator ait = it->attributes_begin();
			ait != it->attributes_end(); ++ait)
		{
			cout << " " << ait->name() << "=" << ait->value() << endl;
		}
	}
}*/