// 2. Create a program to find the sum of elements in an array using pointers.
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> *(arr + i);
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *(arr + i);
    }

    cout << "Sum of array elements: " << sum << endl;
    delete[] arr;

    return 0;
}
