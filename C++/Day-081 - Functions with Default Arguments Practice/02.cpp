/*
Problem Statement

In a small town library, the librarian wants to track the total number of books across different 
categories like "Science", "Fiction", and "History". Implement a program that calculates the total 
number of books by passing the objects of each category as arguments to a function.

Class Definition:
Category Class: Contains an integer attribute for the number of books and a constructor to initialize it.
Function: The calculateTotalBooks function takes multiple Category objects as arguments and returns the total number of books.
*/

#include <iostream>
using namespace std;

class Category {
public:
    int numBooks;
    Category(int books) : numBooks(books) {}
};

int calculateTotalBooks(Category cat1, Category cat2) {
    return cat1.numBooks + cat2.numBooks;
}

int main() {
    int n;
    cin >> n;
    
    int totalBooks = 0;
    for(int i = 0; i < n; i++) {
        int books;
        cin >> books;
        Category cat(books);
        totalBooks += cat.numBooks;
    }
    
    cout << "Total books: " << totalBooks << endl;
    
    return 0;
}
