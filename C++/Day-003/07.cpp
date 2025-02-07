// Write a program to find the sum of digits of a number.

#include <iostream>

using namespace std;

int main()
{
    int num, rem, sum = 0;
    cout << "Enter the number: ";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    cout << "The sum of digits is: " << sum;
    return 0;
}