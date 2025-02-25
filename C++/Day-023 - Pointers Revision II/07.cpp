/*
Problem Statement



John wants to write a program to understand how to swap the first and last elements of an integer array using pointers. Help him by writing a program that takes the number of elements in the array and the array elements as input from the user.



Your program should then swap the first and last elements of the array using pointers and display the array before and after the swap.﻿

Input format :
The first line consists of an integer n, representing the number of elements of an array.

The second line consists of n space-separated elements representing the elements of the array.

Output format :
The first line prints "Array before swap: " followed by the array before swapping separated by a space.

The second line prints "Array after swap: " followed by the array after swapping separated by a space.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 20

Sample test cases :
Input 1 :
4
5 1 9 2
Output 1 :
Array before swap: 5 1 9 2
Array after swap: 2 1 9 5
Input 2 :
5
12 45 68 95 67
Output 2 :
Array before swap: 12 45 68 95 67
Array after swap: 67 45 68
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];
    cout << "Array before swap: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    int *ptr = arr;
    int temp = *ptr;
    *(ptr) = *(ptr + num - 1);
    *(ptr + num - 1) = temp;

    cout << "Array after swap: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}