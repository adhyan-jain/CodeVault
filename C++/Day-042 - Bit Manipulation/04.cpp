// Update Bit
#include <iostream>
using namespace std;

int updateBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value << pos));
}

int main(){
    int n ,pos, value;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter position: ";
    cin>>pos;
    cout<<"Enter value: ";
    cin>>value;
    cout<<updateBit(n, pos, value)<<endl;
    return 0;
}