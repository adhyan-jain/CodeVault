// Write a program to count the number of ones in a binary representation of a number

#include <iostream>
using namespace std;
// In this question we know that n & n-1 has exact same bits as n except for the rightmost bit because it clears the rightmost set bit
// By following this logic we can clear every set bit and count the number of set bits

int func(int n){
    int count = 0;
    while(n){
        n = n & n-1;
        count++;
    }
    return count;
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The number of ones in binary representation of the given number is: "<<func(num)<<endl;
    return 0;
}