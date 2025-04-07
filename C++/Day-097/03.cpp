/*
Problem Statement



Maria is developing a program to manage student records, with a specific focus on weight tracking. She has created a class named Student that represents student information and allows for the incrementing (++) of a student's weight by 1 kg through operator overloading with the friend function named operator.



Assist her in completing the program.

Input format :
The first line of input consists of an integer, representing the student's ID.

The second line consists of a double-point value, representing the initial weight of the student.

Output format :
The first line of output prints the student ID and initial weight of the student.

The second line prints the student ID and the weight of the student after incrementing.

Round off the weights to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ Student ID ≤ 1000

1.0 ≤ initial Weight ≤ 100.0

Sample test cases :
Input 1 :
101 
34.8
Output 1 :
101 34.80
101 35.80
Input 2 :
103
78.987
Output 2 :
103 78.99
103 79.99
*/


#include <iostream>
#include <iomanip>

using namespace std;

class Student{
    int id;
    double weight;
    public:
        Student(int a, double b) : id(a), weight(b) {}
        
        Student operator++(int){
            Student temp = *this;
            temp.weight += 1.0;
            return temp;
        }
        
        void print(){
            cout << id << " " << fixed << setprecision(2) << weight << endl;
        }
};


int main(){
    int a;
    double b;
    cin >> a >> b;
    
    Student s(a, b);
    s.print();
    
    Student result = s++;
    
    result.print();
    return 0;
}