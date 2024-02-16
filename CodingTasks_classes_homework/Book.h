#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book
{
public:

	//Constructor
	Book(string title, string author, int pages);

	//Methods
	void displayBookInfo();

private:

	//Attributes
	string title;
	string author;
	int pages;

};

#endif