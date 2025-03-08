/*
Single File Programming Question
Problem Statement



Ram is given two arrays: arr1 and arr2, each containing integer values. His task is to merge these two arrays into a single array and print the merged result.



Implement a program where Ram inputs the elements of both arrays. Use a pointer to a group of arrays to manage and merge the arrays. Finally, print the merged result.

Input format :
The first line consists of an integer m, representing the number of elements of the first array.

The second line consists of m space-separated integers representing the elements of the first array.

The third line consists of an integer n, representing the number of elements of the second array.

The second line consists of n space-separated integers representing the elements of the second array.

Output format :
The output prints the concatenated elements of both arrays, separated by a space.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ m, n ≤ 25

-100 ≤ Each array element ≤ 100

Sample test cases :
Input 1 :
7
-74 14 47 82 87 21 -66
3
10 20 30
Output 1 :
-74 14 47 82 87 21 -66 10 20 30
Input 2 :
5
-100 20 30 40 50
1
100
Output 2 :
-100 20 30 40 50 100

*/

#include <iostream>
using namespace std;

int main()
{
    int size1, size2;
    cin >> size1;
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    int *ptr1 = arr1;
    int *ptr2 = arr2;

    int arr3[size1 + size2];
    int k = 0;

    for (int i = 0; i < size1; i++)
    {
        arr3[k++] = *(ptr1 + i);
    }
    for (int i = 0; i < size2; i++)
    {
        arr3[k++] = *(ptr2 + i);
    }

    int *ptr3 = arr3;

    // Printing array
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << *(ptr3 + i) << " ";
    }
    return 0;
}