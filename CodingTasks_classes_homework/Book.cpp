#include "Book.h"
#include <iostream>

//Constructor
Book::Book(string title, string author, int pages)
{
	this->title = title;
	this->author = author;
	this->pages = pages;
}

//Methods

//Method to display the book information
void Book::displayBookInfo()
{
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Pages: " << pages << endl;
}