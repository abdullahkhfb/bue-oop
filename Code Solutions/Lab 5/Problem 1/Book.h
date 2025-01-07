#pragma once // Do not remove this

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    string title;
    string author;
    int publicationYear;

public:
    Book();
    Book(string title, string author, int publicationYear);
    Book(Book &book);
    ~Book();

    string getTitle();
    string getAuthor();
    int getPublicationYear();

    void setTitle(string title);
    void setAuthor(string author);
    void setPublicationYear(int publicationYear);

    void DisplayBookInfo();
    bool CompareBooks(Book &book);
};