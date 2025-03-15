/*
Problem Statement
Raj is working on a project where he needs to find the largest element in an array of integers. 
However, he wants to create a flexible function that allows him to find the largest element in 
an array of any size, with a default size of 5.

Help him write a function to accomplish this.

Function Signature
int findLargest(int arr[], int size = 5)
*/

#include <iostream>
using namespace std;

// Function to find the largest element in an array
int findLargest(int arr[], int size = 5) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int SIZE = 5;
    int arr[SIZE];

    // Getting user input
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    // Find the largest element
    int largest = findLargest(arr);

    // Display the largest element
    cout  << largest;

    return 0;
}