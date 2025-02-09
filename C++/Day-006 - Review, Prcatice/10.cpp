/*

Number Pattern

Take number of rows as user input

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/

#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    for(int i=0; i<row; i++){
        for(int j=0; j<row-i-1; j++){
            cout<<" ";
        }
        for(int k=1; k<=i+1; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}