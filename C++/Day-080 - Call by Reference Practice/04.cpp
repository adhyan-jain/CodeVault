/*
Problem Statement

Rakshita is studying mathematics and is intrigued by the Fibonacci sequence. She wants to calculate the 
last digit of a Fibonacci number quickly and efficiently. 

She asks for your help to write a program that calculates and returns the last digit of the nth 
Fibonacci number using a function. The program should use call-by-reference to efficiently return the result.

*/

#include <iostream>

using namespace std;


int func(int num){
    if(num==2){
        return 1;
    }
    else if(num==1){
        return 0;
    }
    else{
        return func(num-1) + func(num-2);
    }
}

void fiboLastDigit(int a){
    cout<<func(a)%10;
}

int main(){
    int num;
    cin>>num;
    fiboLastDigit(num);
    return 0;
}