// Write a program to find the largest element in an array.

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    int num, max=0;
    cout<<"Enter the number of elements in the array: ";
    cin>>num;  // Input number of elements of array
    int arr[num];
    cout<<"Enter the elements of the array: ";
    // Input elements of array
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    // Finding the largest number of array
    for(int i=0; i<num; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    cout<<"Largest element in the array is: "<<max<<endl;

    return 0;
}