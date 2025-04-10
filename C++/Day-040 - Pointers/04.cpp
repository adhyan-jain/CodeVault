// 4. Write a program to dynamically allocate an array and perform basic operations.
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

    cout << "Array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
