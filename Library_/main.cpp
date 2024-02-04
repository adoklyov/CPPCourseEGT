#include <iostream>
#include "Library.h"

using namespace std;

int main() {

    // Library creation
    Library library;

    // Adding books to the library
    library.addBook(Book("To Kill a Mockingbird", Author("Harper", "Lee", "American"), Genre::Fiction, 1960));
    library.addBook(Book("The Great Gatsby", Author("F. Scott", "Fitzgerald", "American"), Genre::Classic, 1925));
    library.addBook(Book("1984", Author("George", "Orwell", "British"), Genre::Fiction, 1949));
    library.addBook(Book("Brave New World", Author("Aldous", "Huxley", "British"), Genre::Fiction, 1932));
    library.addBook(Book("Moby Dick", Author("Herman", "Melville", "American"), Genre::Classic, 1851));

    // Searching for book by name
    string searchName = "Moby Dick";
    auto foundBooksByName = library.searchName(searchName);
    cout << "Searching for books by name '" << searchName << "':" << endl;
    for (Book& book : foundBooksByName) {
        cout << "Found: " << book.title << " by " << book.author.firstName << " " << book.author.lastName << endl;
    }

    // Searching for book by author
    string searchAuthor = "Harper Lee";
    auto foundBooksByAuthor = library.searchAuthor(searchAuthor);
    cout << "Searching for books by author '" << searchAuthor << "':" << endl;
    for (Book& book : foundBooksByAuthor) {
        cout << "Found: " << book.title << " by " << book.author.firstName << " " << book.author.lastName << endl;
    }

    return 0;
}