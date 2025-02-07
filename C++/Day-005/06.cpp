// Implement a program to find the second largest element in an array

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number of elememts in the array: ";
    cin>>num;
    cout<<"Enter the elements of the array: ";
    int arr[num];
    
    // Input the elements of the array
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    int max=arr[0], sec_max=arr[num-1];

    // Finding second maximum element
    for(int i=0; i<num; i++){
        if(arr[i]>max){
            sec_max=max;
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>sec_max){
            sec_max=arr[i];
        }
    }

    cout<<"The second maximum element of the array is: "<<sec_max<<endl;

    return 0;
}