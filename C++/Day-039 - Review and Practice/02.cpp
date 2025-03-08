/*

Inverted Half Pyramid

Take number of Rows as user input

* * * * * * 
* * * * *   
* * * *     
* * *       
* *
*

*/

#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    for(int i=0; i<row; i++){
        for(int j=0; j<row-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}