// Create a program that checks if a character is a vowel or consonant.

#include <iostream>

using namespace std;

int main(){
    char character;
    cout<<"Enter character: ";
    cin>>character;
    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
        cout<<"The character is a vowel";
    else 
        cout<<"The character is a consonant";
    return 0;
}
