/*
Problem Statement

Suppose you are given a task to write a program that checks if a given number is an Armstrong number or not. 
Additionally, if the number is an Armstrong number, the program should print its factors. Write a code for 
the same using inline functions.

Function specifications:

inline bool isArmstrong(int number) - This calculates whether the given number is an Armstrong number or not.
inline void printFactors(int number) - This prints the factors of the given number.

Note: This is a sample question that can be asked in a TCS recruitment.
*/

#include <iostream>
#include <cmath>

using namespace std;

class A{
    public:
        inline bool isArmstrong(int number);
        inline void printFactors(int number);
};

inline bool A :: isArmstrong(int num){
    int c=0;
    int num2=num;
    int num3=num2;
    int len=0;
    while(num3){
        len++;
        num3/=10;
    }
    while(num){
        int rem = num%10;
        c+=pow(rem, len);
        num/=10;
    }
    return (num2==c) ? 1:0;
}
inline void A :: printFactors(int num){
    for (int i=1; i<=num; i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
}


int main(){
    int num;
    cin>>num;
    A a;
    if(a.isArmstrong(num)){
        cout<<num<<" is an Armstrong number."<<endl;
        a.printFactors(num);
    }
    else{
        cout<<num<<" is not an Armstrong number."<<endl;
    }
    return 0;
}