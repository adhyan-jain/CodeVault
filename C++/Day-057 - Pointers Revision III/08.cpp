/*
In a mathematics class, students are learning about identity matrices and
their properties. To reinforce their understanding, they are tasked with
developing a program that checks whether a given matrix is an identity
matrix or not using pointers.

Write a program to assist the students.
*/

#include <iostream>

using namespace std;

int iden(int (*matrix)[10], int n, int m)
{
    if (n != m)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == j && matrix[i][j] != 1) || ((i != j) && matrix[i][j] != 0))
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int matrix[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    if (iden(matrix, n, m))
    {
        cout << "Identity matrix" << endl;
    }
    else
    {
        cout << "Not an identity matrix" << endl;
    }
    return 0;
}
