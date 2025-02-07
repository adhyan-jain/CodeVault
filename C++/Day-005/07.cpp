// Write a program to rotate an array by k positions.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number of elements in the array: ";
    cin>>num;
    cout<<"Enter the elements of the array: ";
    int arr[num];
    // Input the elements of the array
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    int rotate;
    cout<<"Enter the number of places to be rotated: ";
    cin>>rotate;
    rotate=rotate%num; // Effective rotation
    int temp[rotate]; // Temporary array

    // Copy the first rotate elements to the temporary array
    for (int i=0; i<rotate; i++){
        temp[i]=arr[num-rotate+i];
    }
    // Shift the remaining elements to the right 
    for(int i=num-1; i>=rotate; i--){
        arr[i]=arr[i-rotate];
    }
    // Copy the elements from the temporary array to the start of the array
    for(int i=0; i<rotate; i++){
        arr[i]=temp[i];
    }

    // Print the rotated array
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}