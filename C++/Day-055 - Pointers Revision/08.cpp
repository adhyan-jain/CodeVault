/*
Problem Statement



Rasika is taking a programming class, and her teacher has assigned her a task to write a program that reads an integer n(input must be greater than 1000) and finds the sum of its maximum and minimum digits present in n.



She wants to impress her teacher by writing a program that utilizes pointers and pointer arithmetic. Help her accomplish this task.

Input format :
The input consists of an integer n, representing the number Rasika needs to process.

Output format :
If n is less than or equal to 1000, the output prints "Invalid input".

Otherwise, the output prints an integer which is the sum of the maximum and minimum digits of n.



Refer to the sample output for the formatting specifications.

Code constraints :
n ≤ 109

Sample test cases :
Input 1 :
12354
Output 1 :
6
Input 2 :
108
Output 2 :
Invalid input
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = n % 10, min = n % 10;
    if (n <= 1000)
    {
        cout << "Invalid input";
        return 0;
    }
    while (n)
    {
        int rem = n % 10;
        if (max < rem)
        {
            max = rem;
        }
        if (min > rem)
        {
            min = rem;
        }
        n /= 10;
    }
    cout << min + max;
    return 0;
}