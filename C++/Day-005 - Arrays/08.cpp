// Create a program to merge two sorted arrays.

#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter the number of elements of array 1: ";
    cin>>num1;
    int arr1[num1];
    cout<<"Enter the elements of the array 1: ";
    
    // Input elements in array 1
    for(int i=0; i<num1; i++){
        cin>>arr1[i];
    }
    
    cout<<"Enter the number of elements of array 2: ";
    cin>>num2;
    int arr2[num2];
    cout<<"Enter the elements of the array 2: ";
    
    // Input elements in array 2
    for(int i=0; i<num2; i++){
        cin>>arr2[i];
    }

    // Adding element in a new array till one of the array is empty
    int i=0, j=0, k=0;
    int arr3[num1+num2];
    while (i<num1 || j<num2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }

    // Adding thee remaining elements of array 1
    while(i<num1){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    
    // Adding thee remaining elements of array 2
    while(j<num2){
        arr3[k]=arr2[j];
        k++;
        j++;
    }

    // Print the merged sorted array
    for(int i=0; i<num1+num2; i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}