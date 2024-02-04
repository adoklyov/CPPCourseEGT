#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

using namespace std;

class Author
{
public:

	//Constructor
	Author(string firstName, string lastName, string nationality);
	Author() = default;

	//Attributes
	string firstName;
	string lastName;
	string nationality;

};

#endif