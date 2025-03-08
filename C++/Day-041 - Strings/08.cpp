// 8. Create a program to check if two strings are anagrams.
#include <iostream>
#include <algorithm>
using namespace std;

void func8(string str1, string str2) {
    string sorted1 = str1, sorted2 = str2;
    sort(sorted1.begin(), sorted1.end());
    sort(sorted2.begin(), sorted2.end());

    cout << "By function: " << (sorted1 == sorted2 ? "Yes" : "No") << endl;

    if (str1.length() != str2.length()) {
        cout << "By normal method: No" << endl;
        return;
    }

    int freq[256] = {0};
    for (char ch : str1) freq[ch]++;
    for (char ch : str2) freq[ch]--;

    bool isAnagram = true;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            isAnagram = false;
            break;
        }
    }
    cout << "By normal method: " << (isAnagram ? "Yes" : "No") << endl;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    func8(str1, str2);
    return 0;
}
