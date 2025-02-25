
/*
Problem Statement



Amit is working on a program to print array elements in reverse order using pointers. He needs to write a function that takes an array and its size as input and prints the elements in reverse order.



Help Amit by writing the required function.



Function Signature: void displayarray(int *a, int n)

Input format :
The first line consists of an integer N, representing the number of elements in the array.

The second line consists of N space-separated integers, representing the array elements.

Output format :
The output prints the elements of the array in reverse order.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 15

1 ≤ array elements ≤ 300

Sample test cases :
Input 1 :
5
12 34 5 91 7
Output 1 :
7 91 5 34 12
Input 2 :
3
6 7 8
Output 2 :
8 7 6

*/

#include <stdio.h>

void displayarray(int *a, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(a + i));
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    displayarray(arr, num);
    return 0;
}
