// Create a program that calculates the factorial of a number.

#include <iostream>

using namespace std;

int main(){
    int num;   // variable to store the number for which the factorial is to be calculated
    int factorial=1;  // variable to store the factorial value
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1; i<=num; i++){
        factorial*=i;
    }
    cout<<"The factorial of "<<num<<" is: "<<factorial;
    return 0;
}