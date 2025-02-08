/*
Floyd's Triangle

Take number of rows as user input

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <iostream>
using namespace std;

int main(){
    int row, count=1;
    cout<<"Enter number of rows: ";
    cin>>row;
    for(int i=1; i<=row; i++){
        for(int j=0; j<i; j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
    return 0;
}