/*
Problem Statement

In a bustling city, a team of detectives is working tirelessly to solve a series of mysterious 
messages left by an enigmatic criminal mastermind. These messages contain a mix of alphabets, 
numbers, and special characters. The detectives need a tool to analyze the messages and provide 
insights into the distribution of different characters within them.

Design a program that takes a message as input and performs the following tasks:

a) Calculate the length of the message.
b) Count the number of alphabets (both uppercase and lowercase), numbers, and special characters in the message.
c) Determine the occurrence count of each unique character in the message.

Function specifications

int length (const char* str1) -  To find the length of the string
void count (const char * str1) - To count the total number of alphabets, digits, or special characters
void occur (const char * str1) - To count all occurrences of a character
*/

#include <iostream>
using namespace std;

int length(const char* str1) {
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
    }
    return i;
}

void count(const char* str1) {
    int digi = 0, alpha = 0, spch = 0, i;
    int len = length(str1);
    for (i = 0; i < len; i++) {
        switch (str1[i]) {
            case 97 ... 122:  // Lowercase alphabets
            case 65 ... 90:   // Uppercase alphabets
                alpha++;
                break;
            case 43 ... 52:   // Digits
                digi++;
                break;
            default:
                spch++;
                break;
        }
    }
    cout << "Alphabets: " << alpha << endl;
    cout << "Numbers: " << digi << endl;
    cout << "Special characters: " << spch << endl;
}

void occur(const char* str1) {
    int i, j, k = 1, count = 0;
    int len = length(str1);
    char a[len];
    a[0] = str1[0];
    for (i = 0; i < len; i++) {
        for (j = 0; j < k; j++) {
            if (str1[i] == a[j]) {
                break;
            }
            if (j == k - 1) {
                a[k] = str1[i];
                k++;
            }
        }
    }
    for (i = 0; i < k; i++) {
        for (j = 0; j < len; j++) {
            if (a[i] == str1[j]) {
                count++;
            }
        }
        cout << "Occurrence of " << a[i] << " is " << count << endl;
        count = 0;
    }
}

int main() {
    int n;
    char str[50];
    cin >> str;
    cout << "Length: " << length(str) << endl;
    count(str);
    occur(str);
    return 0;
}
