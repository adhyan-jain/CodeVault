// Write a program to check if a given number us power of 2

#include <iostream>
using namespace std;

// n & n-1 has same bits as n except the rightmost set bit
// To solve this question we can see that in any power of 2, there is only one set bit
// Following this if number is power of 2 then num-1 will have all bits set except the rightmost set bit
// on using bitwise AND operator on num and num-1 we will get 0 as result


bool func(int n){
    return (n && !(n & n-1)); // The n && part is for the case where number is 0, becuse in that n-1 isn't possible
}

int main(){
    int num, check;
    cout<<"Enter the number: ";
    cin>>num;
    check=func(num);
    if(check){
        cout<<"The number "<<num<<" is a power of 2";
    }
    else{
        cout<<"The number "<<num<<" is not a power of 2";
    }
    return 0;
}