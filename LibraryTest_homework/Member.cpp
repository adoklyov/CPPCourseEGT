#include "Member.h"
#include <iostream>

//Constructor
Member::Member(string name, int age, string id)
{
	this->name = name;
	this->age = age;
	this->id = id;
}

//Methods

//Method to display member details
void Member::displayMember()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "ID: " << id << endl;
}

//Method to borrow a book
void Member::borrowBook(Book* book)
{
	cout << "Borrowing book:" << endl;
	book->displayBook();
}