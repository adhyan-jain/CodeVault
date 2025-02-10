// 4. Write a program to remove all spaces from a string.
#include <iostream>
#include <algorithm>
using namespace std;

void func(string str) {
    string newstr1 = str;
    newstr1.erase(remove(newstr1.begin(), newstr1.end(), ' '), newstr1.end());
    cout << "By function: " << newstr1 << endl;

    string newstr2 = "";
    for (char ch : str) {
        if (ch != ' ') newstr2 += ch;
    }
    cout << "By normal method: " << newstr2 << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    func(str);
    return 0;
}
