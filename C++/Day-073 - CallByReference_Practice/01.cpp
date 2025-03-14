/*
Problem Statement
Taylor wants a program to calculate the sum of all divisors of a given integer. The program should 
take an integer N as input and, using call by reference, compute and display the sum of divisors. 

Assist Taylor in implementing the program using a call-by-reference function.
*/

#include <iostream>
using namespace std;

void calculateSumOfDivisors(int num, int &sum) {
    sum = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
}

int main() {
    int N;
    cin >> N;
    int sumOfDivisors;
    calculateSumOfDivisors(N, sumOfDivisors);
    cout << sumOfDivisors << endl;
    return 0;
}