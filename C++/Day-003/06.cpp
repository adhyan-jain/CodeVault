// Implement a program to reverse a given number.

#include <iostream>

using namespace std;

int main()
{
    int num, rem, new_num = 0;
    cout << "Enter the number: ";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        new_num = new_num * 10 + rem;
        num /= 10;
    }
    cout << "The number after reversing is: " << new_num;
    return 0;
}