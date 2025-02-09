// 5. Create a program to implement a simple linked list using pointers.
#include <iostream>
using namespace std;

void printList(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int *arr = new int[n];
    
    for (int i = 0; i < n; ++i) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    printList(arr, n);

    delete[] arr;

    return 0;
}
