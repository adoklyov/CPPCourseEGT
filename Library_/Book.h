#ifndef BOOK_H
#define BOOK_H

#include "Author.h"
#include "Genre.h"
#include <string>

class Book
{
public:

	//Constructor
	Book(string name, Author author, Genre genre, int publishYear);

	//Attributes
	string title;
	Author author;
	Genre genre;
	int publishYear;

};

#endif 