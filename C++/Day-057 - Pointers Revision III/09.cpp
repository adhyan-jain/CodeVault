/*
The Ideal Power Plant
Alex is an engineer working on optimizing power plants. In his research, he
came across a special property that can help in identifying ideal
confgurations for power plants. This property involves checking if a
certain confguration number meets a unique balance condition.
For a given confguration number, Alex needs to determine if it has a special property where the sum of its divisors (excluding the number itself)
that are relatively prime to their complementary divisors equals the original
number.
To simplify, a confguration number n is considered "ideal" if the sum of its
divisors d (where each divisor d is relatively prime to
n/d) equals n.
Alex needs a program that can help him verify whether a given number
meets this balance condition.
Example 1
Input:
60
Output:
60 is a unitary perfect number.
Explanation:
The number 60 is a unitary perfect number, because 1, 3, 4, 5, 12, 15, 20 are
its proper unitary divisors, and 1 + 3 + 4 + 5 + 12 + 15 + 20 = 60.
Example 2
Input:
18
Output:
18 is not a unitary perfect number.
Explanation:
The number 18 is not a unitary perfect number, because 1, 2, and 9 are its
proper unitary divisors, and 1 + 2 + 9 = 12, which is not equal to 18.
Company Tags: CoCubes
*/

#include <iostream>

using namespace std;

int gcd(int *a, int *b)
{
    int x = *a, y = *b;
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int isu(int *n)
{
    int sum = 0;
    int num = *n;
    for (int d = 1; d <= num; d++)
    {
        if (num % d == 0)
        {
            int com = num / d;
            if (gcd(&d, &com) == 1)
            {
                sum += d;
            }
        }
    }
    return (sum == 2 * num);
}

int main()
{
    int n;
    cin >> n;
    if (isu(&n))
    {
        cout << n << " is a unitary perfect number." << endl;
    }
    else
    {
        cout << n << " is not a unitary perfect number." << endl;
    }
    return 0;
}
