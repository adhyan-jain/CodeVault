// 7. Write a program to find the first non-repeating character in a string.
#include <iostream>
#include <unordered_map>
using namespace std;

void func(string str) {
    unordered_map<char, int> freq;
    for (char ch : str) freq[ch]++;
    
    for (char ch : str) {
        if (freq[ch] == 1) {
            cout << "By function: " << ch << endl;
            break;
        }
    }

    for (int i = 0; i < str.length(); i++) {
        bool unique = true;
        for (int j = 0; j < str.length(); j++) {
            if (i != j && str[i] == str[j]) {
                unique = false;
                break;
            }
        }
        if (unique) {
            cout << "By normal method: " << str[i] << endl;
            break;
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    func(str);
    return 0;
}
