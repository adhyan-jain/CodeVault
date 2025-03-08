// Write a function to find the sum of elements in an array.

#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int sum = sumOfArray(arr, n);
    cout << "Sum of elements: " << sum << endl;
    
    return 0;
}
