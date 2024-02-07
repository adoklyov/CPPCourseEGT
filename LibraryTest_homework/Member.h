#ifndef MEMBER_H
#define MEMBER_H

#include "Book.h"
#include <string>

using namespace std;

class Member
{
public:
	//Constructor
	Member(string name,int age, string id);
	
	//Methods
	void displayMember();
	void borrowBook(Book* book);
	
	//Attributes
	string name;
	int age;
	string id;
};

#endif