#include "Book.h"
#include "Member.h"
#include <iostream>

int main() {

    //Array of book objects
    Book books[] = {
        Book("The Great Gatsby", "F. Scott Fitzgerald", "123456789"),
        Book("Moby Dick", "Herman Melville", "987654321"),
        Book("War and Peace", "Leo Tolstoy", "192837465")
    };

    //Array of members
    Member members[] = {
        Member("John Doe", 30, "MEM001"),
        Member("Jane Smith", 25, "MEM002")
    };

    //Borrowing method
    members[0].displayMember();
    members[0].borrowBook(&books[0]);

    cout << "Next member:" << endl;

    members[1].displayMember();
    members[1].borrowBook(&books[1]);

    return 0;
}
