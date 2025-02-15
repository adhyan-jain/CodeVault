/* 
   Question 1: Create a class 'Student' with attributes 'name' and 'age'.
   Create an object, assign values, and display the student details.
*/
#include <iostream>
using namespace std;


class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Alice";
    s1.age = 20;

    s1.display(); // Output: Name: Alice, Age: 20
    return 0;
}
