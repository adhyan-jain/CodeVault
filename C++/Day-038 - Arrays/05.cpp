// Create a program to perform bubble sort on an array.

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

    // Perform bubble sort
    for(int i=0; i<num; i++){
        for(int j=0; j<num-1-i; j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // Print the sorted array
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
}