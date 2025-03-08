// 3. Implement a program to reverse a string using pointers.
#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        swap(*start, *end);
        start++;
        end--;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
