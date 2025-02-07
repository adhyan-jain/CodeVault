// Write a program to check whether a number is even or odd

#include <iostream>
using namespace std;

int main(){
    int num1;
    bool isOdd;
    cout<<"Enter the number: ";
    cin>>num1;
    isOdd=num1%2;
    cout<<"The number is (1 if odd, 0 if even): "<<isOdd;
}