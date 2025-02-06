// Swap number with call by reference and swap by pointers.

#include <iostream>
using namespace std;

// Swap by Reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap by Pointer
void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    
    // Get user input
    cout << "Enter two integers: ";
    cin >> x >> y;
    
    // Swap by Reference
    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;
    
    // Swap back
    swapByReference(x, y);
    
    // Swap by Pointer
    swapByPointer(&x, &y);
    cout << "After swapByPointer: x = " << x << ", y = " << y << endl;
    
    return 0;
}
