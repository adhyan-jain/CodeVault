// 7. Write a program to sort an array using pointers.
#include <iostream>
using namespace std;

void sortArray(int *arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (*(arr + i) > *(arr + j)) {
                swap(*(arr + i), *(arr + j));
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }

    sortArray(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
