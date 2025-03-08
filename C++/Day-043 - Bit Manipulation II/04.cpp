// Write a program to generate all possible subsets of a character set

#include <iostream>
using namespace std;

void subset(char arr[], int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int size;
    cout<<"Enter the length of the array: ";
    cin>>size;
    char arr[size];
    cout<<"Enter the character of the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    subset(arr, size);
    return 0;
}