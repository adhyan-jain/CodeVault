/*

Butterfly pattern

Take number of Rows as user input

*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 

*/
#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    for(int i=0; i<row*2; i++){
        for(int j=0; j<row*2; j++){
            int count1, count2;
            count1=i;
            count2=j;
            if(i>=row){
                count1=2*row-i-1;
            }
            if(j>=row){
                count2=2*row-j-1;
            }
            if(count1>=count2 || 2*row-count1<2*row-count2){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}