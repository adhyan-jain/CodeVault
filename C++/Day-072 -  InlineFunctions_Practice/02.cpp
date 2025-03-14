/*
Problem Statement
You are tasked with developing a program for a Math competition. One of the challenges in the competition 
requires participants to find the sum of the squares of the first n even numbers and odd numbers.



Write a C++ program that uses an inline function to calculate the sum of the squares of the first n 
even and odd numbers. The program should take an input value of n from the user and output the result. 
You need to implement the necessary functions and ensure that the program handles the computation accurately.

Function specifications:
inline int sumOfSquaresEven - calculates the sum of squares of the first n even numbers
inline int sumOfSquaresOdd - calculates the sum of squares of the first n odd numbers

Note: This is a sample question asked in Accenture recruitment.
*/

#include <iostream>
using namespace std;

inline int sumOfSquaresEven(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += (2 * i) * (2 * i);
    }
    return sum;
}

inline int sumOfSquaresOdd(int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += (2 * i + 1) * (2 * i + 1);
    }
    return sum;
}

int main(){
    int n;

    cin >> n;

    int sumEven = sumOfSquaresEven(n);
    int sumOdd = sumOfSquaresOdd(n);

    cout << sumEven << endl;
    cout << sumOdd ;

    return 0;
}