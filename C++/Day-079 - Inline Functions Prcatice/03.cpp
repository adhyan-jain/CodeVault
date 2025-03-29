/*
Problem Statement

Write a program that asks the user to enter two integers and then calculates the greatest common 
divisor (GCD) of the two numbers using an inline function. The GCD can be calculated using Euclid's 
algorithm.
*/

#include <iostream>
using namespace std;

inline int gcd(int a, int b) {
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}

int main() {
    int num1, num2;
    cin>>num1>>num2;
    cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<gcd(num1, num2);
    return 0;
}
