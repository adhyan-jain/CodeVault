// 1. Write a program to swap two numbers using pointers.
#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    swap(&num1, &num2);

    cout << "After swapping: " << num1 << " " << num2 << endl;
    return 0;
}
