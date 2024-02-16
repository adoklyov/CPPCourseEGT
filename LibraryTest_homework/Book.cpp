#include "Book.h"
#include <iostream>


//Constructor
Book::Book(string title, string author, string isbn)
{
	this->title = title;
	this->author = author;
	this->isbn = isbn;
}

//Methods

//Method to display the book details
void Book::displayBook()
{
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "ISBN: " << isbn << endl;
}