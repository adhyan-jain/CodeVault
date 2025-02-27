/*
Imagine Alex is working on a project where he needs to adjust the values in
an array based on their contribution to the total product of the array.

He was given an array of integers, and his goal is to modify each element
in such a way that it represents the result of dividing the total product of
the array by its original value using pointers.

Example
Input:
3
2 3 4
Output:
12 8 6

Explanation:
Total Product = 2 * 3 * 4 = 24
Modify each element in the array by dividing the total product by its original
value.
For the frst element (2), the new value will be 24 / 2 = 12.
For the second element (3), the new value will be 24 / 3 = 8.
For the third element (4), the new value will be 24 / 4 = 6.
So, the modifed array becomes {12, 8, 6}.

*/

#include <iostream>

using namespace std;

void mod(int *arr, int n)
{
    long long int tot = 1;
    int zer = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zer++;
            continue;
        }
        tot *= arr[i];
    }
    if (zer > 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "0 ";
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (zer == 1)
        {
            cout << ((arr[i] == 0) ? tot : 0);
        }
        else
        {
            cout << tot / arr[i] << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mod(arr, n);
    return 0;
}