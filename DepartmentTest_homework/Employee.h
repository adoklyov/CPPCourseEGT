#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {

public:

    //Constructor
    Employee(string name, int ID, string position);

    //Methods
    void displayEmployee();

    //Attributes
    string name;
    int ID;
    string position;
};

#endif 

