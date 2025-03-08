// 9. Implement a program to concatenate two strings without using built-in functions.
#include <iostream>
using namespace std;

void func9(string str1, string str2) {
    string concat1 = str1 + str2;
    cout << "By function: " << concat1 << endl;

    string concat2 = str1;
    for (char ch : str2) {
        concat2 += ch;
    }
    cout << "By normal method: " << concat2 << endl;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    func9(str1, str2);
    return 0;
}
