// Implement a function to convert decimal to binary.

#include <iostream>
using namespace std;

void decimalToBinary(int n)
{
    if (n > 1)
        decimalToBinary(n / 2);
    cout << n % 2;
}

int main()
{
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "Binary representation: ";
    decimalToBinary(num);
    cout << endl;

    return 0;
}
