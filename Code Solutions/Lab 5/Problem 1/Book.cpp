#include "Book.h"

// Default constructor
Book::Book()
{
    title = "";
    author = "";
    publicationYear = 0;
}

// Parameterized constructor
Book::Book(string title, string author, int publicationYear)
{
    this->title = title;
    this->author = author;
    this->publicationYear = publicationYear;
}

// Copy constructor
Book::Book(Book &book)
{
    title = book.title;
    author = book.author;
    publicationYear = book.publicationYear;
}

// Destructor
Book::~Book()
{
    // No dynamic memory to free, so nothing to do here
}

// Getters
string Book::getTitle()
{
    return title;
}

string Book::getAuthor()
{
    return author;
}

int Book::getPublicationYear()
{
    return publicationYear;
}

// Setters
void Book::setTitle(string title)
{
    this->title = title;
}

void Book::setAuthor(string author)
{
    this->author = author;
}

void Book::setPublicationYear(int publicationYear)
{
    this->publicationYear = publicationYear;
}

// Display book information
void Book::DisplayBookInfo()
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publication Year: " << publicationYear << endl;
}

// Compare books
bool Book::CompareBooks(Book &book)
{
    // This function compares the current Book object with another Book object passed as a parameter.
    // The parameter 'book' is a reference to another Book object that we want to compare with the current object.
    // 'this' is a pointer to the current object, so 'this->title' refers to the title of the current object.
    // 'book.title' refers to the title of the Book object passed as a parameter.
    // The function checks if the title, author, and publication year of both books are the same.
    // The comparison is done using the equality operator (==) for each member variable.
    // If all three member variables (title, author, and publication year) are equal, the function returns true.
    // Otherwise, it returns false.
    // This allows us to determine if two Book objects represent the same book based on these attributes.
    return (title == book.title && author == book.author && publicationYear == book.publicationYear);
}