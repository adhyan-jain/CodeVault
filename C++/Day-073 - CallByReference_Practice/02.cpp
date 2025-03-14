/*
Problem statement
Mandy wants to calculate the factorial of a number and the sum of its digits. Help her with a program 
for the same using a call-by-reference function.

Write a program that takes an integer as input and computes both the factorial and the sum of its digits.
*/

#include <iostream>
using namespace std;

void calculateFactorialAndSum(int n, int& factorial, int& sum) {
    factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    int temp = factorial; 

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
}

int main() {
    int number;
    int factorial = 0; 
    int sum = 0;

    cin >> number;

    calculateFactorialAndSum(number, factorial, sum);

    cout << "Factorial: " << factorial << endl;
    cout << "Sum of digits of the factorial: " << sum << endl;

    return 0;
}