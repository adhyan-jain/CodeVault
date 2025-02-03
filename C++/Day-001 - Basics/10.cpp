// Check whether a number is positive, negative, or zero

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"\n0 - False, 1 - True"<<endl<<endl;
    cout<<"Number is positive: "<< (num>0) << endl;
    cout<<"Number is zero: "<< (num=0) << endl;
    cout<<"Number is negative: "<< (num<0) << endl;
    return 0;
}