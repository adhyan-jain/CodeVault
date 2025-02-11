// Get bit
#include <iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos)) !=0);
}

int main(){
    int n, pos;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter position: ";
    cin>>pos;
    cout<<getBit(n, pos)<<endl;
    return 0;
}