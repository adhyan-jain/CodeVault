// 6. Implement a program to convert a string to uppercase.
#include <iostream>
#include <algorithm>
using namespace std;

void func(string str) {
    string up1 = str;
    transform(up1.begin(), up1.end(), up1.begin(), ::toupper);
    cout << "By function: " << up1 << endl;

    string up2 = str;
    for (char &ch : up2) {
        if (ch >= 'a' && ch <= 'z') ch -= 32;
    }
    cout << "By normal method: " << up2 << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    func(str);
    return 0;
}
