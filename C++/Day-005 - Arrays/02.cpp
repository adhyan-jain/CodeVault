// Create a program to reverse an array.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number of elements of the array: ";
    cin>>num;
    cout<<"Enter the elements of the array: ";
    int arr[num];

    // Input the elements of array
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    // Reversing the array
    for(int i=0; i<num/2; i++){
        int temp = arr[i];
        arr[i] = arr[num-i-1];
        arr[num-i-1] = temp;
    }

    // Print the reversed array
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}