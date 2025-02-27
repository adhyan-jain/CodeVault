/*
Meet Professor Henry, a brilliant mathematician who loves solving brain
teasers. One day, he stumbles upon an intriguing problem - fnding the sum
of the diagonals in a 3D matrix. He decides to write a program to solve it
using pointers and multi-dimensional concepts but realizes that the task is
more challenging than he thought.

Therefore, assist him in writing a program that calculates the sum of the
diagonals in a 3D matrix
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows, columns, height;
    scanf("%d %d %d", &rows, &columns, &height);
    if (rows != columns || columns != height)
    {
        printf("Error\n");
        return 0;
    }
    int matrix[rows][columns][height];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            for (int k = 0; k < height; k++)
            {
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += *(*(*(matrix + i) + i) + i);
    }
    printf("%d\n", sum);
    return 0;
}