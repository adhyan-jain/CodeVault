// Swap two numbers using a temporary variable

#include <iostream>
using namespace std;

int main(){
    int num1, num2, temp;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"\nBefore swap:\nNumber 1: "<<num1<<"\nNumber 2: "<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"\nAfter swap:\nNumber 1: "<<num1<<"\nNumber 2: "<<num2;

}