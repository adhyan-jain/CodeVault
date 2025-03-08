// Write a function to check if a number is prime.

#include <iostream>

using namespace std;

void primecheck(int num);

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    primecheck(num);
}

void primecheck(int num){
    int flag=1;
    for(int i=2; i<num; i++){
        if(num%i==0){
            flag=0;
        }
    }
    if(flag && flag>=2)
        cout<<"The number is a prime number";
    else
        cout<<"The number is not a prime number";
}