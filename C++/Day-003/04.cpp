// Write a program to check if a number is prime.

#include <iostream>

using namespace std;

int main(){
    int num;
    int flag=0; // flag to check if the number is prime or not
    cout<<"Enter the number: ";
    cin>>num;
    // looping every element from 2 to num-1
    for(int i=2; i<num; i++){
        if(num%i==0)
            flag=1;
    }
    if(flag)
        cout<<"The number "<< num <<" is not a prime number";
    else
        cout<<"The number "<< num <<" is a prime number";
    return 0;
}