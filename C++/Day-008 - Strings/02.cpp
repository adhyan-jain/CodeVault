// 2. Create a program to check if a string is a palindrome.
#include <iostream>
#include <algorithm>
using namespace std;

void func(string str) {
    string rev1 = str;
    reverse(rev1.begin(), rev1.end());
    cout << "By function: " << (str == rev1 ? "Yes" : "No") << endl;

    bool isPalindrome = true;
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    cout << "By normal method: " << (isPalindrome ? "Yes" : "No") << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    func(str);
    return 0;
}
