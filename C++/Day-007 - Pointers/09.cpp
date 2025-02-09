// 9. Implement a program to remove duplicates from an array using pointers.
#include <iostream>
using namespace std;

void removeDuplicates(int *arr, int &n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (*(arr + i) == *(arr + j)) {
                for (int k = j; k < n - 1; ++k) {
                    *(arr + k) = *(arr + k + 1);
                }
                --n;
                --j;
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

    removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
