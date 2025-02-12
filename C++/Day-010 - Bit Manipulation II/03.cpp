// Write a program to generate all possible subsets of a set

#include <iostream>
using namespace std;

void subset(int arr[], int n){
    // from 0 to 2^n - 1
    for(int i=1; i<(1<<n); i++){
        // print subset for the ith number
        for(int j=0; j<n; j++){
            // getting bit
            if((i & (1 << j))){
                cout << arr[j] << " ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    subset(arr, size);
    return 0;
}