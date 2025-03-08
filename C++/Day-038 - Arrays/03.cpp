// Implement a program to remove duplicates from a sorted array.

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

    // Remove duplicates from the array
    int size=0;
    for(int i=0; i<num; i++){
        bool flag=0;
        for(int j=i+1; j<num; j++){
            if (arr[i]==arr[j] && i!=j){
                flag = 1;
                break;
            }
        }
        if(!flag){
            arr[size++]=arr[i];
        }
    }

    // Print the array without duplicates
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}