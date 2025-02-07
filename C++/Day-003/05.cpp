// Create a program that prints a pattern of stars in a pyramid shape.

#include <iostream>

using namespace std;

int main()
{
    int num; // to store the value of number of rows of pyramid
    cout << "Enter the number of rows: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    { // loop for number of rows
        for (int j = 0; j < num - i - 1; j++)
        { // loop for spaces
            cout << "  ";
        }
        for (int k = 0; k <= i; k++)
        { // loop for left half of pyramid
            cout << "* ";
        }
        for (int l = i; l < i * 2; l++)
        { // loop for rigth half of pyramid
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}