// Write a function to check if a number is palindrome.

#include <iostream>

using namespace std;

void func(int nums); // Declaring function

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    func(num);
    return 0;
}

// Function to check if a number is palindrome
void func(int nums)
{
    int rem, rev = 0, flag = 1;
    int num = nums;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (nums == rev) // Checking if number is equal to its reverse
        cout << "Number is a palindrome";
    else
        cout << "Number is not a palindrome";
}