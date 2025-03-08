/*
Problem Statement:

Create a class A that takes an integer N as input and generates a sequence of N numbers where each
number alternates between 1 and 6. The program should start with 1 and then repeatedly 
switch from 1 and 6 for N iterations, displaying each number in the sequence separated by a space.

Use class and objects to solve the program.
*/

#include <iostream>
using namespace std;

class A {
public:
    int num;
};

int main() {
    A a;

    int n;
    cin >> n;

    int r = 1; 

    for (int i = 0; i < n; ++i) {
        a.num = r;
        cout << a.num << " ";
        r = (r % 6) + 1;
    }
    return 0;
}