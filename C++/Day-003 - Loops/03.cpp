// Implement a program to print the Fibonacci series up to n terms.

#include <iostream>

using namespace std;

int main(){
    int num;  // variable to store the number of terms;
    int a=0, b=1, c=a+b;
    cout<<"Enter the number of terms required: ";
    cin>>num;
    cout<<"The terms of fibinacci series upto "<<num<<" terms are: "<<endl;
    if(num==1){  // If number of terms to be printed is 1
        cout<<a;
        return 0;
    }
    cout<<a<<" ";
    if(num==2){  // If number of terms to be printed is 2
        cout<<b;
        return 0;
    }
    cout<<b<<" ";
    // Printing 3 to num terms by loop
    for(int i=3; i<=num; i++){
        a=b;
        b=c;
        c=a+b;
        cout<<b<<" ";
    }
    return 0;
}