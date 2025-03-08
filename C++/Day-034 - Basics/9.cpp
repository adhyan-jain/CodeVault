// program to calculate the simple interest given principal, rate, and time

#include <iostream>
using namespace std;

int main(){
    int principal, rate, time;
    cout<<"Enter Principal amount: ";
    cin>>principal;
    cout<<"Enter Rate of interest: ";
    cin>>rate;
    cout<<"Enter time: ";
    cin>>time;
    double interest = (principal*rate*time)/100;
    cout<<"Simple Interest is: "<<interest;
    return 0;
}