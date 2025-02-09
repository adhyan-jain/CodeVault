// 10. Write a program to implement function pointers for basic arithmetic operations.
#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int (*operation)(int, int);

    cout << "Choose operation (1 - Add, 2 - Subtract, 3 - Multiply, 4 - Divide): ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: operation = add; break;
        case 2: operation = subtract; break;
        case 3: operation = multiply; break;
        case 4: operation = divide; break;
        default: cout << "Invalid choice!" << endl; return 0;
    }

    cout << "Result: " << operation(a, b) << endl;
    return 0;
}
