/*
Problem Statement:

Alphabetics Game:

You have to enter four letters for each uppercase letter you will get 10 marks and for each lowercase letter, you will get -5 marks.

Write a program to calculate the total score.

Create a base class with a virtual method void game(). Define this method in the Derived class and calculate the total score.

Input format :
Input consists of four characters separated by space.

Output format :
The output prints the total score.

Sample test cases :
Input 1 :
A F K R
Output 1 :
Score : 40
Input 2 :
A b D f
Output 2 :
Score : 10
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Base {
    public:
    virtual void game() {}
};

class Derived: public Base {
    public:
    char a, b, c, d;
    Derived(char a, char b, char c, char d): a(a), b(b), c(c), d(d) {}
    void game() override {
        int score = 0;
        if (int(a) <= 95) {
            score += 10;
            
        }
        else {
            score -= 5;
        }
        if (int(b) <= 95) {
            score += 10;
            
        }
        else {
            score -= 5;
        }
        if (int(c) <= 95) {
            score += 10;
            
        }
        else {
            score -= 5;
        }
        if (int(d) <= 95) {
            score += 10;
            
        }
        else {
            score -= 5;
        }
        cout << "Score : " << score << endl;
    }
};

int main() {
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    Base *ptr;
    Derived obj(a, b, c, d);
    ptr = &obj;
    ptr->game();
}