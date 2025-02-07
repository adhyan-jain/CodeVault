// Create a recursive function to generate Fibonacci series.

#include <iostream>
using namespace std;

void fibonacci(int n) {
    if (n <= 1)
        cout << n << " ";
    else {
        fibonacci(n - 1);
        cout << n << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;
    
    cout << "Fibonacci series: ";
    fibonacci(n);
    cout << endl;
    
    return 0;
}
