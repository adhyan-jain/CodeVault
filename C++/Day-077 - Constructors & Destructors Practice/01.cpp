/*
Problem Statement

Rathi wants to determine whether a given string is a palindrome or not. To assist her, you are tasked 
with creating a program that checks if a string is a palindrome.

You are required to define a PalindromeChecker class with the following properties and methods:

A constructor that initializes the object with a string.
A method named isPalindrome that checks if the input string is a palindrome.
A destructor that displays a message when an object is destroyed.
*/

#include <iostream>
#include <string>
using namespace std;

class PalindromeChecker {
private:
    string str;

public:
    PalindromeChecker(string input) {
        str = input;
    }

    bool isPalindrome() {
        int left = 0;
        int right = str.length() - 1;
        
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    ~PalindromeChecker() {
        cout << "Destructor called. Object destroyed." << endl;
    }
};

int main() {
    string input;
    cin >> input;

    PalindromeChecker checker(input);

    if (checker.isPalindrome()) {
        cout << "The input string is a palindrome." << endl;
    } else {
        cout << "The input string is not a palindrome." << endl;
    }

    return 0;
}
