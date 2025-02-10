// 1. Write a program to reverse a string.
#include <iostream>
#include <algorithm>
using namespace std;

void func1(string str) {
    string rev1 = str;
    reverse(rev1.begin(), rev1.end());
    cout << "By function: " << rev1 << endl;

    string rev2 = str;
    int n = rev2.length();
    for (int i = 0; i < n / 2; i++) {
        swap(rev2[i], rev2[n - i - 1]);
    }
    cout << "By normal method: " << rev2 << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    func1(str);
    return 0;
}
