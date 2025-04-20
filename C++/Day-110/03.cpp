/*
Problem Statement



Ruthra is given an array of integers, and your task is to create a program that generates the multiplication table for a specific element in the array. The program should take an input 'n' (1 <= n <= 10) from the user, and if the input is not within this range, it should display "-1" and terminate.



The given array of 10 integers arr initially populated with the following elements: { 11, 21, 33, 14, 41, 60, 13, 8, 25, 50 }.



The program should then find the n-th element in the array (0-indexed) and use it as the base number for generating the multiplication table from 1 to 10. The multiplication table should be displayed on the console in the following format:



"{base number} * 1 = {result of multiplication}"

"{base number} * 2 = {result of multiplication}"

...

"{base number} * 10 = {result of multiplication}"



Please write a program that implements the above functionality. You can use vectors and iterators to handle the array. If the input 'n' is valid and the multiplication table is displayed successfully, the program should return 0; otherwise, it should terminate with an error code.



Note: Use the concepts of vectors and advancing iterators.

Input format :
The input consists of a single integer n.

Output format :
If the input n is not within the valid range (1 to 10, inclusive), the output will be a single line containing "-1".

Otherwise, for valid input n, the output will consist of 10 lines, each displaying the multiplication result in the following format:

n-th_element * i = result



Note: where n-th_element is the value of the n-th element in the array arr, i is the integer from 1 to 10, and result is the product of n-th_element and i.



Code constraints :
The input value n should be an integer.

1 <= n <= 10 (n should be within the range of 1 to 10, inclusive).

The array arr contains exactly 10 integer elements.

Each element in the array arr is an integer.

The multiplication results of the n-th element with numbers from 1 to 10 will also be within the integer range.

Sample test cases :
Input 1 :
1
Output 1 :
11 * 1 = 11
11 * 2 = 22
11 * 3 = 33
11 * 4 = 44
11 * 5 = 55
11 * 6 = 66
11 * 7 = 77
11 * 8 = 88
11 * 9 = 99
11 * 10 = 110
Input 2 :
-8
Output 2 :
-1
*/

#include<iostream> 
#include<iterator> 
#include<vector> 
using namespace std; 
int main() 
{ 
    int arr[] = { 11, 21, 33, 14, 41, 60, 13, 8, 25, 50 };
    int size = sizeof(arr) / sizeof(arr[0]); 
    vector<int> ar(arr, arr + size);
    int n;
    cin>>n;
    if(n<1 || n>10)
    {
        cout<<"-1";
        return 0;
    }
    
    vector<int>::iterator ptr = ar.begin(); 
    advance(ptr, n-1); 
 
    for (int i = 1; i <= 10; ++i) {
        cout << *ptr << " * " << i << " = " << (*ptr) * i << endl;
    }
    return 0; 
} 