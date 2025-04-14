/*
Problem Statement



Implement a Matrix class that represents a two-dimensional matrix of integers. Overload the unary - operator to negate all elements of the matrix and return a new matrix with the negated values. 



Create a class called Matrix and Matrix operator-() overloads the unary - operator to negate all elements of the matrix. It returns a new Matrix object with the negated values.

Input format :
The first line contains two integers, rows and cols, representing the dimensions of the matrix.

The next row lines contain cols integers each, representing the elements of the matrix.

Output format :
The original matrix, printed row by row with elements separated by spaces.

The negated matrix is printed row by row with elements separated by spaces.

Sample test cases :
Input 1 :
2 2
1 2
3 4
Output 1 :
Original Matrix:
1 2 
3 4 
Negated Matrix:
-1 -2 
-3 -4 
Input 2 :
3 3
0 0 0
0 0 0
0 0 0
Output 2 :
Original Matrix:
0 0 0 
0 0 0 
0 0 0 
Negated Matrix:
0 0 0 
0 0 0 
0 0 0 
Input 3 :
1 1
5
Output 3 :
Original Matrix:
5 
Negated Matrix:
-5 
Input 4 :
2 5
0 -1 2 -3 4
5 -6 -7 8 9
Output 4 :
Original Matrix:
0 -1 2 -3 4 
5 -6 -7 8 9 
Negated Matrix:
0 1 -2 3 -4 
-5 6 7 -8 -9 
*/


#include <bits/stdc++.h>
using namespace std;

class Matrix {
    int n, m;
    int mat[10][10];
    public:
    Matrix(int a, int b, int c[10][10]): n(a), m(b) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                mat[i][j] = c[i][j];
            }
        }
    }
    
    Matrix operator-() {
        Matrix res = *this;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                mat[i][j] *= -1;
            }
        }
        return res;
    }
    void display() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    int mat[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    cout << "Original Matrix: " << endl;
    Matrix obj(n, m, mat);
    obj.display();
    -obj;
    
    cout << "Negated Matrix: " <<endl;
    obj.display();
}