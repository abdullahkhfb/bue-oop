#include <iostream>
#include "Book.h"
using namespace std;

int main()
{
    // Create book1 using parameterized constructor
    Book book1("To Kill a Mockingbird", "Harper Lee", 1960);
    cout << "\nBook 1 Information:";
    book1.DisplayBookInfo();

    // Create book2 using default constructor and set values
    Book book2;
    book2.setTitle("The Great Gatsby");
    book2.setAuthor("F. Scott Fitzgerald");
    book2.setPublicationYear(1925);
    cout << "\nBook 2 Information:";
    book2.DisplayBookInfo();

    // Create book3 using copy constructor
    Book book3(book1);
    cout << "\nBook 3 Information (Copied from Book 1):";
    book3.DisplayBookInfo();

    // Compare book1 and book2
    cout << "\nComparing Book 1 and Book 2:";
    if (book1.CompareBooks(book2))
    {
        cout << "\nThe books are identical" << endl;
    }
    else
    {
        cout << "\nThe books are different" << endl;
    }

    return 0;
}