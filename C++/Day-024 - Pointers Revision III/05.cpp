/*
Meet Professor Henry, a brilliant mathematician who loves solving brain
teasers. One day, he stumbles upon an intriguing problem - fnding the sum
of the diagonals in a 3D matrix. He decides to write a program to solve it
using pointers and multi-dimensional concepts but realizes that the task is
more challenging than he thought.

Therefore, assist him in writing a program that calculates the sum of the
diagonals in a 3D matrix
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int rows, columns, height;
    cin >> rows >> columns >> height;
    if (rows != columns || columns != height)
    {
        cout << "Error" << endl;
        return 0;
    }
    
    vector<vector<vector<int>>> matrix(rows, vector<vector<int>>(columns, vector<int>(height)));
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            for (int k = 0; k < height; k++)
            {
                cin >> matrix[i][j][k];
            }
        }
    }
    
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += matrix[i][i][i];
    }
    
    cout << sum << endl;
    return 0;
}
