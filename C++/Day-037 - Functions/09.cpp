// Implement a function to check if a string is a valid email address.

#include <iostream>
#include <string>
using namespace std;

bool isValidEmail(const string& email) {
    int atPosition = email.find('@');
    int dotPosition = email.find('.', atPosition);
    
    return (atPosition != string::npos) && (dotPosition != string::npos);
}

int main() {
    string email;
    cout << "Enter an email address: ";
    cin >> email;
    
    if (isValidEmail(email))
        cout << email << " is a valid email address." << endl;
    else
        cout << email << " is not a valid email address." << endl;
    
    return 0;
}

