// Write a program to perform linear search in an array.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number of elements of the array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements of array: ";
    
    // Input the elements of the array
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    int search;
    cout<<"Enter the number to search: ";
    cin>>search;

    // Performing linear search
    for(int i=0; i<num; i++){
        if(arr[i]==search){
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }
    }

    // Output in case the element is not found
    cout<<"Element not found";
    return 0;
}