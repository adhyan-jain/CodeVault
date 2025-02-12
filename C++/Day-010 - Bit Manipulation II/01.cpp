// Write a program to check if a given number us power of 2

#include <iostream>
using namespace std;

bool func(int n){
    return (n && !(n& n-1)); // The n && part is for the case where number is 0
}

int main(){
    int num, check;
    cout<<"Enter the number: ";
    cin>>num;
    check=func(num);
    if(check){
        cout<<"The number "<<num<<" is a power of 2";
    }
    else{
        cout<<"The number "<<num<<" is not a power of 2";
    }
    return 0;
}