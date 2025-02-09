/*

Rhombus Pattern

Take number of rows as user input

        * * * * * 
      * * * * *   
    * * * * *     
  * * * * *       
* * * * *

*/

#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of row: ";
    cin>>row;
    for(int i=0; i<row; i++){
        for(int j=0; j<row-i-1; j++){
            cout<<"  ";
        }
        for(int k=0; k<row; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}