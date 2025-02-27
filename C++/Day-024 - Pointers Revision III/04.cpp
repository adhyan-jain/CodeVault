/*
1. Problem Statement
Patrick is developing a program for fnancial transactions. Your task is to
assist him in completing the program.

You are given two arrays, each of size N. The frst array contains a set of
positive integers representing the transaction amount, and the second
array contains binary values (0s and 1s), where 0 represents a positive
sign(credit), and 1 represents a negative sign(debit).

Implement a program that negates(changes the sign) the corresponding
transaction amount using pointers. After the negation operation, print the
resulting array

Example

Input:
5
100 200 120 345 667
1 0 1 0 1
Output:
-100 200 -120 345 -667

Explanation:
There are 5 fnancial transactions {100, 200, 120, 345, 667}. The second
array indicates whether each transaction is a credit (0) or debit (1). The
program changes the sign of the transaction amounts based on the
corresponding binary values, resulting in the output: {-100, 200, -120, 345,
-667}.
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int amounts[n], signs[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &amounts[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &signs[i]);
    }
    int *p = amounts;
    int *s = signs;
    for (int i = 0; i < n; i++)
    {
        if (*(s + i) == 1)
        {
            *(p + i) = -*(p + i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}
