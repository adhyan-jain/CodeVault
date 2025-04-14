/*
Problem Statement



Write a C++ program that defines a Matrix class capable of performing various matrix operations. The class should allow matrix multiplication, transpose, and input/output operations. 



In the main function, the program should take two matrices as input, calculate their product (if valid), and display the result. Additionally, it should compute and display the transpose of the first matrix.

Input format :
The first line of input contains two integers rows1 and cols1, representing the dimensions of the first matrix.

The next rows1 lines contain cols1 integers each, representing the elements of the first matrix.

The following line contains two integers rows2 and cols2, representing the dimensions of the second matrix.

The next rows2 lines contain cols2 integers each, representing the elements of the second matrix.

Output format :
The output displays the following:

The result of matrix multiplication with each element separated by spaces and rows separated by newlines.
The transpose of the first matrix with each element separated by spaces and rows separated by newlines.


Refer to the sample outputs for the formatting specifications.

Code constraints :
1 ≤ rows1, cols1, rows2, cols2 ≤ 10

-100 ≤ The matrix elements (integers) ≤ 100

Sample test cases :
Input 1 :
2 2
2 3
4 5
2 2
1 2
3 4
Output 1 :
Matrix product:
11 16 
19 28 
Transpose of the first matrix:
2 4 
3 5 
Input 2 :
2 2
1 2
3 4
2 2
2 3
4 5
Output 2 :
Matrix product:
10 13 
22 29 
Transpose of the first matrix:
1 3 
2 4 
*/


#include <iostream>

using namespace std;

class Matrix {
private:
    int rows, cols;
    int **data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[r];
        for (int i = 0; i < r; i++) {
            data[i] = new int[c];
        }
    }

    // Overload the >> operator for input
    friend istream& operator>>(istream& in, Matrix& mat) {
        for (int i = 0; i < mat.rows; i++) {
            for (int j = 0; j < mat.cols; j++) {
                in >> mat.data[i][j];
            }
        }
        return in;
    }

    // Overload the << operator for output
    friend ostream& operator<<(ostream& out, const Matrix& mat) {
        for (int i = 0; i < mat.rows; i++) {
            for (int j = 0; j < mat.cols; j++) {
                out << mat.data[i][j] << " ";
            }
            out << endl;
        }
        return out;
    }

    // Overload the * operator for matrix multiplication
    Matrix operator*(const Matrix& other) {
        if (cols != other.rows) {
            exit(1);
        }

        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    // Transpose the matrix
    Matrix transpose() {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[j][i] = data[i][j];
            }
        }
        return result;
    }

    // Destructor to release memory
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }
};

int main() {
    int rows1, cols1, rows2, cols2;

    cin >> rows1 >> cols1;

    Matrix matrix1(rows1, cols1);
    cin >> matrix1;

    cin >> rows2 >> cols2;

    Matrix matrix2(rows2, cols2);
    cin >> matrix2;

    if (cols1 != rows2) {
        exit(1);
    }

    Matrix product = matrix1 * matrix2;
    cout << "Matrix product:" << endl << product;

    Matrix transposed = matrix1.transpose();
    cout << "Transpose of the first matrix:" << endl << transposed;

    return 0;
}