// program to check if a year is a leap year

#include <iostream>

using namespace std;

int main(){
    int year;
    int flag=0;
    cout<<"Enter the year: ";
    cin>>year;
    if((year%400==0) || (year%4==0 && year%100!=0))
        cout<<"The year "<<year<<" is a leap year";
    else 
        cout<<"The year "<<year<<" is not a leap year";
    return 0;
}