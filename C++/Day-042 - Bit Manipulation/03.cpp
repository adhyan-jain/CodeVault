// Clear Bit
#include <iostream>
using namespace std;

int clearBit(int n, int pos){
    int mask =  ~(1<<pos);  // mask is a terminology because we mask the digit we need corresponding to 1
    return (n & mask);
}

int main(){
    int n, pos;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter position: ";
    cin>>pos;
    cout<<clearBit(n, pos)<<endl;
    return 0;
}