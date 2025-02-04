// Write a program that simulates a simple ATM machine using switch-case.

#include <iostream>

using namespace std;

int main(){
    int amount, withdraw, deposit;
    int choice;
    cout<<"Enter the amount in your account: ";
    cin>>amount;
    cout<<"***************************\nPress 1 to Withdraw Money\nPress 2 to Deposit Money\n*******************************"<<endl;
    cout<<"Enter our choice: ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter amount to be withdrawn: ";
            cin>>withdraw;
            amount -= withdraw;
            break;
        case 2:
            cout<<"Enter amount to be deposit: ";
            cin>>deposit;
            amount += deposit;
            break;
    }
    cout<<"Amount left is: "<<amount;
    return 0;
}