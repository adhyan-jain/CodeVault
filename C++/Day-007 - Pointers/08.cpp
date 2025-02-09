// 8. Create a program to multiply two matrices using pointers.
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns for matrices: ";
    cin >> rows >> cols;

    int *matrix1 = new int[rows * cols];
    int *matrix2 = new int[rows * cols];
    int *result = new int[rows * cols]{0};

    cout << "Enter elements for matrix 1: ";
    for (int i = 0; i < rows * cols; ++i) {
        cin >> *(matrix1 + i);
    }

    cout << "Enter elements for matrix 2: ";
    for (int i = 0; i < rows * cols; ++i) {
        cin >> *(matrix2 + i);
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < cols; ++k) {
                *(result + i * cols + j) += *(matrix1 + i * cols + k) * *(matrix2 + k * cols + j);
            }
        }
    }

    cout << "Resulting matrix: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << *(result + i * cols + j) << " ";
        }
        cout << endl;
    }

    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}
