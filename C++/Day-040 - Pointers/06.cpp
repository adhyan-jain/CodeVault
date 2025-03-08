// 6. Implement a program to find the length of a string using pointers.
#include <iostream>
using namespace std;

int stringLength(char *str) {
    int length = 0;
    while (*(str + length) != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    cout << "Length of string: " << stringLength(str) << endl;
    return 0;
}
