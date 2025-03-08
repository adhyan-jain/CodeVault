// 5. Create a program to find the length of a string without using built-in functions.
#include <iostream>
using namespace std;

void func(string str) {
    cout << "By function: " << str.length() << endl;

    int len = 0;
    for (char ch : str) len++;
    cout << "By normal method: " << len << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    func(str);
    return 0;
}
