#include "Library.h"

//Methods

//Method to add a book to the library
void Library::addBook(Book book)
{
	books.push_back(book);
}

//Method to search for a book by name
vector<Book> Library::searchName(string name)
{
	vector<Book> foundTrue;
	for (Book book : books)
	{
		if (book.title.find(name) != string::npos)
		{
			foundTrue.push_back(book);
		}
	}
	return foundTrue;
}

//Method to search for a book by author
vector<Book> Library::searchAuthor(string authorFullName)
{
	vector<Book> foundTrue;
	for (Book book : books)
	{
		string fullName = book.author.firstName + " " + book.author.lastName;
		if (fullName.find(authorFullName) != string::npos)
		{
			foundTrue.push_back(book);
		}
	}
	return foundTrue;
}