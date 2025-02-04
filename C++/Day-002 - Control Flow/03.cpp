// Implement a simple menu-driven calculator using switch-case

#include <iostream>

using namespace std;

int main(){
    int choice, num1, num2;
    cout<<"\n******MAIN MENU******\n\nPress 1 to Add\nPress 2 to Subtract\nPress 3 to Multiply\nPress 4 to Divide\n\n*********************"<<endl<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice>4 || choice<1){
        cout<<"Invalid choice"<<endl;
        return 0;
    }
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    switch(choice){
        case 1:
            cout<<"The sum of "<< num1 <<" and "<< num2 <<" is: "<< num1 + num2;
            break;
        case 2:
            cout<<"The difference of "<< num1 <<" and "<< num2 <<" is: "<< num1 - num2;
            break;
        case 3:
            cout<<"The product of "<< num1 <<" and "<< num2 <<" is: "<< num1 * num2;
            break;
        case 4:
            cout<<"The quotient of "<< num1 <<" and "<< num2 <<" is: "<< num1 / num2;
            break;
        default:
            cout<<"Invalid!";
            break;
    }
    return 0;
}