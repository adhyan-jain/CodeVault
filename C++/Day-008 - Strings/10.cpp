// 10. Write a program to find the most frequent character in a string.
#include <iostream>
#include <unordered_map>
using namespace std;

void func10(string str) {
    unordered_map<char, int> freq;
    char maxChar1 = ' ';
    int maxCount1 = 0;

    for (char ch : str) freq[ch]++;
    for (auto p : freq) {
        if (p.second > maxCount1) {
            maxCount1 = p.second;
            maxChar1 = p.first;
        }
    }
    cout << "By function: " << maxChar1 << endl;

    char maxChar2 = ' ';
    int maxCount2 = 0;
    for (int i = 0; i < str.length(); i++) {
        int count = 0;
        for (int j = 0; j < str.length(); j++) {
            if (str[i] == str[j]) count++;
        }
        if (count > maxCount2) {
            maxCount2 = count;
            maxChar2 = str[i];
        }
    }
    cout << "By normal method: " << maxChar2 << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    func10(str);
    return 0;
}
