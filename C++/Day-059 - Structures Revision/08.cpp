/*
Problem Statement

Rani wants to purchase n different books from a bookstore.

Create a structure called book with the following details: book ID, book's name, author, publisher, number of copies, and price.

If the price of the book is more than 500 rupees, a 10% tax should be added. For all other cases, a 5% tax should be added. Calculate the total amount that she has to pay.

Input format :
The first line consists of an integer n, representing the number of books.

In each of the following n lines, the input consists of six space-separated values:

An integer - Book ID
A string (without spaces) - Book's name
A string (without spaces) - Author's name
A string (without spaces) - Publisher's name
An integer - Number of copies required
A float value - Price of the book
Output format :
The output prints n lines. In each of the following n lines, the output prints two space-separated values:

A string (without spaces) - Book's name.
A float value rounded to two decimal places - Final price after including appropriate tax.

Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 10

1 ≤ Length of the book's name ≤ 50

1 ≤ Length of the author's name ≤ 25

1 ≤ Length of the publisher's name ≤ 25

Sample test cases :
Input 1 :
3
101 ToKillAMockingbird HarperLee PenguinBooks 150 450.00
102 1984 GeorgeOrwell RandomHouse 100 300.00
103 PrideAndPrejudice JaneAusten VintageBooks 120 550.00
Output 1 :
ToKillAMockingbird 472.50
1984 315.00
PrideAndPrejudice 605.00

*/
#include <iostream>
using namespace std;

typedef struct
{
    int id;
    char name[51];
    char author[26];
    char publisher[26];
    int copies;
    float price;
} book;

int main()
{
    int n;
    cin >> n;
    book a[n];
    for (int i = 0; i < n; i++)
    {
        cout << a[i].id << a[i].name << a[i].author << a[i].publisher << a[i].copies << a[i].price;
    }

    for (int i; i < n; i++)
    {
        if (a[i].price > 500)
        {
            a[i].price *= 1.1;
        }
        else
        {
            a[i].price *= 1.05;
        }
        cout << a[i].name << " " << a[i].price;
    }
    return 0;
}