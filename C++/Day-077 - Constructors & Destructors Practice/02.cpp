/*
Problem Statement

Write a program that calculates the determinant of a square matrix. The program should take the size 
of the square matrix as input, followed by the elements of the matrix. It should then display the 
matrix and calculate the determinant. Finally, it should output the determinant value.


The Matrix class has the following member functions:

Matrix(int n): Constructor that takes an integer n as a parameter to initialize a square matrix of size n by dynamically allocating memory.
void readMatrix(): Reads the elements of the matrix from the standard input.
void displayMatrix(): Displays the matrix on the standard output.
int determinant(): Calculates and returns the determinant of the matrix using a recursive approach.
int determinantOfSubMatrix(int** subMatrix, int subSize): Helper function used by determinant() to calculate the determinant of a submatrix.
*/

#include <iostream>

using namespace std;

class Matrix{
    int **matrix;
    int size;
    public:
        Matrix(int n){
            size=n;
            matrix = new int*[size];
            for(int i=0; i<size; i++){
                matrix[i] = new int[size];
            }
        }
        
        void readMatrix(){
            for(int i=0; i<size; i++){
                for(int j=0; j<size; j++){
                    cin>>matrix[i][j];
                }
            }
        }
        
        void displayMatrix(){
            cout<<"Matrix:"<<endl;
            for(int i=0; i<size; i++){
                for(int j=0; j<size; j++){
                    if(j==size-1){
                        cout<<matrix[i][j];
                    }else{
                        cout<<matrix[i][j]<<" ";
                    }
                }
                cout<<endl;
            }
        }
        
        int determinant(){
            
            if(this->size == 1){
                return matrix[0][0];
            }
            
            int det=0;
            
            int** subMatrix = new int*[this->size-1];
            for(int i=0; i<this->size-1; i++){
                subMatrix[i] = new int[this->size-1];
            }
            
            for(int col=0; col<this->size; col++){
                int r = 0;
                for(int i=1; i<this->size; i++){
                    int c = 0;
                    for(int j=0; j<this->size; j++){
                        if(j!=col){
                            subMatrix[r][c++] = this->matrix[i][j];
                        }
                    }
                    r++;
                }
                
                int sign = (col%2==0) ? 1: -1;
                int subDet=this->determinantOfSubMatrix(subMatrix, this->size-1);
                
                det+= sign * matrix[0][col] * subDet;
            }
            for(int i=0; i<this->size-1; i++){
                delete[] subMatrix[i];
            }
            delete[] subMatrix;
            
            return det;
        }
        
        int determinantOfSubMatrix(int** subMatrix, int subSize){
            if(subSize==1){
                return subMatrix[0][0];
            }
            
            int subDet = 0;
            
            int** subSubMatrix = new int*[subSize-1];
            
            for(int i=0; i<subSize-1; i++){
                subSubMatrix[i] = new int[subSize-1];
            }
            
            for(int col=0; col<subSize; col++){
                int r=0;
                for(int i=1; i<subSize; i++){
                    int c=0;
                    for(int j=0; j<subSize; j++){
                        if(j!=col){
                            subSubMatrix[r][c++]=subMatrix[i][j];
                        }
                    }
                    r++;
                }
                
                int sign = (col%2==0) ? 1: -1;
                
                int subSubDet = this->determinantOfSubMatrix(subSubMatrix, subSize-1);
                
                subDet+=sign * subMatrix[0][col] *subSubDet;
            }
            
            for(int i=0; i<subSize-1; i++){
                delete[] subSubMatrix[i];
            }
            delete[] subSubMatrix;
            
            return subDet;
            
        }
        
        ~Matrix(){
            for(int i=0; i<this->size; i++){
                delete[] this->matrix[i];
            }
            delete[] this->matrix;
        }
};
int main(){
    int num;
    cin>>num;
    Matrix m(num);
    m.readMatrix();
    m.displayMatrix();
    
    int det = m.determinant();
    cout<<"Determinant: "<<det<<endl;
    return 0;
}