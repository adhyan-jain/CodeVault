/*
Problem Statement

Ram is fascinated with perfect numbers and wants to create a program to identify whether a given 
integer is perfect or not. A perfect number is a positive integer that is equal to the sum of its 
proper divisors (excluding itself).

For example, 6 is a perfect number because its proper divisors are 1, 2, and 3, and 1 + 2 + 3 = 6.

15 is not a perfect number because its proper divisors are 1, 3, 5, and 1 + 3 + 5 = 9.
*/

#include<iostream>
using namespace std;

bool isPerfect(int n, int default_value = 1)
{
    int sum = default_value;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i != n)
                sum = sum + i + n / i;
            else
                sum = sum + i;
        }
    }
    if (sum == n && n != 1)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    
    if (isPerfect(n))
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";

    return 0;
}