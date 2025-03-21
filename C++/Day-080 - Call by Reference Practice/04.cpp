/*
Problem Statement

Rakshita is studying mathematics and is intrigued by the Fibonacci sequence. She wants to calculate the 
last digit of a Fibonacci number quickly and efficiently. 

She asks for your help to write a program that calculates and returns the last digit of the nth 
Fibonacci number using a function. The program should use call-by-reference to efficiently return the result.

*/

#include <iostream>
using namespace std;

void fiboLastDigit(int a, int& result);

void fiboLastDigit(int a, int& result) {
     int x = 0, y = 0, z = 1, i;
    
    for (i = 0; i < a-1; i++) {
        z = y + z;
        x = z;
        z = y;
        y = x;
    }

    result = x % 10;
}

int main() {
    int n;
    cin >> n;
    int result;
    fiboLastDigit(n, result);
    cout << result;
    return 0;
}