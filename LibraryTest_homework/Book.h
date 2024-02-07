#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book
{
public:
	
	//Constructor
	Book(string title, string author, string isbn);

	//Methods
	void displayBook();

	//Attributes
	string title;
	string author;
	string isbn;

};

#endif