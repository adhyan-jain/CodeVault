// 3. Implement a program to count the number of vowels and consonants in a string.
#include <iostream>
#include <algorithm>
using namespace std;

void func(string str) {
    int v1 = 0, c1 = 0;
    string vowels = "aeiouAEIOU";

    for (char ch : str) {
        if (isalpha(ch)) {
            if (vowels.find(ch) != string::npos) v1++;
            else c1++;
        }
    }
    cout << "By function: Vowels = " << v1 << ", Consonants = " << c1 << endl;

    int v2 = 0, c2 = 0;
    for (char ch : str) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') v2++;
            else c2++;
        }
    }
    cout << "By normal method: Vowels = " << v2 << ", Consonants = " << c2 << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    func(str);
    return 0;
}
