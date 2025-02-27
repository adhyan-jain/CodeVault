/*
Problem Statement
John wants to fnd the maximum difference between two elements in an
array using pointers. He wants to write a program that takes an array as
input and calculates the maximum difference between any two elements in
the array.
Guide him with the code.
Function Specifcations: int maxDiff(int *, int )
*/
#include <iostream>

using namespace std;

int maxDiff(int *arr, int n)
{
    if (n < 2)
    {
        return 0;
    }
    int *min = arr, *max = arr;
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        if (*ptr < *min)
        {
            min = ptr;
        }
        if (*ptr > *max)
        {
            max = ptr;
        }
    }
    return *max - *min;
}

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << maxDiff(arr, N) << endl;
    return 0;
}
