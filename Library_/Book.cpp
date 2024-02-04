#include "Book.h"

//Constructor
Book::Book(string name, Author author, Genre genre, int publishYear)
{
	this->title = name;
	this->author = author;
	this->genre = genre;
	this->publishYear = publishYear;
}