// Implement a program to find the largest among three numbers using nested if-else.

#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3;
    cout<<"Enter the numbers"<<endl;
    cout<<"Enter numer 1: ";
    cin>>num1;
    cout<<"Enter numer 2: ";
    cin>>num2;
    cout<<"Enter numer 3: ";
    cin>>num3;
    if(num1>num2){
        if(num1>num3)
            cout<<"Largest number is: "<<num1;
        else
            cout<<"Largest number is: "<<num3;
    }
    else{
        if(num2>num3)
            cout<<"Largest number is: "<<num2;
        else
            cout<<"Largest number is: "<<num3;
    }
    return 0;
}