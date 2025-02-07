// Write a program to find the sum of all even numbers in an array.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of elements in the array: ";
    cin >> num;
    int arr[num];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < num; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    cout << "Sum of all even numbers in the array: " << sum << endl;

    return 0;
}
