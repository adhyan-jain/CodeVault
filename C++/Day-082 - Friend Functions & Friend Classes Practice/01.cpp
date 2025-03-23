/*
Problem Statement

Implement a Matrix class that represents a two-dimensional matrix of integers. The class should 
have methods to create a matrix, set its elements, and print the matrix. Additionally, implement 
a function to calculate the transpose of a matrix. The program should prompt the user to enter 
the dimensions of the matrix and its elements, display the original matrix, and then display 
the transposed matrix.

Function Signature: Matrix Transpose(const Matrix& matrix);
*/

#include <iostream>

using namespace std;

class Matrix{
    int** arr;
    int r,c;
    public:
        Matrix(int row, int col){
            r=row;
            c=col;
            
            arr = new int*[r];
            for(int i=0; i<r; i++){
                arr[i] = new int[c];
            }
            
        }
        
        ~Matrix(){
            for(int i=0; i<r; i++){
                delete[] arr[i];
            }
            delete[] arr;
        }
        
        friend void get(Matrix& m);
        friend void display(const Matrix& m);
        friend Matrix transpose(const Matrix& m);
};

void get(Matrix& m){
    for(int i=0; i<m.r; i++){
        for(int j=0; j<m.c; j++){
            cin >> m.arr[i][j];
        }
    }
}
void display(const Matrix& m){
    for(int i=0; i<m.r; i++){
        for(int j=0; j<m.c; j++){
            cout<<m.arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

Matrix transpose(const Matrix& m){
    Matrix trans(m.c,m.r);
    
    for(int i=0; i<m.r; i++){
        for(int j=0; j<m.c; j++){
            trans.arr[j][i] = m.arr[i][j];
        }
    }
    return trans;
}

int main(){
    int row, col;
    cin>>row>>col;
    
    Matrix m(row, col);
    get(m);
    cout<< "Original Matrix:\n";
    display(m);
    Matrix trans = transpose(m);
    cout<< "Transposed Matrix:\n";
    display(trans);
    return 0;
}