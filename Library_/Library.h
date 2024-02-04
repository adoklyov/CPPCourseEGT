#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>
#include <string>

class Library
{
public:

	//Methods
	void addBook(Book book);
	vector<Book> searchName(string name);
	vector<Book> searchAuthor(string authorFullName);

	vector<Book> books;
};

#endif