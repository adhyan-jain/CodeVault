/*
Problem Statement



Create a program that manages student information and grades for two types of students: Undergraduate (U) and Graduate (G). The program allows users to input a student's name, roll number, and type ('U' for Undergraduate or 'G' for Graduate). Depending on the type, the program calculates and displays the total grade for the student.



Classes and Virtual Functions: Student (Base Class)



Virtual Functions

virtual void inputGrades(): Handles grade input.

virtual void calculateGrade(): Calculates and displays the total grade.



UndergraduateStudent (Derived Class):

Inherits from Student.

Overrides virtual functions for grade input and grade calculation for Undergraduate students.



GraduateStudent (Derived Class):

Inherits from Student.

Overrides virtual functions for grade input and grade calculation for Graduate students.

Input format :
The first line of input consists of a string, representing the student's name.

The second line of input consists of a string, representing the student's roll number.

The third line of input consists of a character 'U' for Undergraduate student or 'G' for Graduate student.

If the student is an Undergraduate student, the next two lines contain two integers representing the midterm and final grades.

If the student is a Graduate student, the next two lines contain two integers representing the research and presentation grades.

Output format :
The output displays the following information:



The first line of output should display "Name: " followed by the student's name.

The second line of output should display "Roll Number: " followed by the student's roll number.

The third line of output should display "Total Grade: " followed by the calculated average grade.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ Length of name ≤ 20

1 ≤ Length of rollNumber ≤ 10

studentType ∈ {'U', 'G'}

0 ≤ grades ≤ 100

Sample test cases :
Input 1 :
John
12345
U
80
90
Output 1 :
Name: John
Roll Number: 12345
Total Grade: 85
Input 2 :
Alice
67890
G
85
92
Output 2 :
Name: Alice
Roll Number: 67890
Total Grade: 88
*/

#include <iostream>
using namespace std;
class Student
{
protected:
    string name, rollNumber;

public:
    Student(string n, string r) : name(n), rollNumber(r) {}
    virtual void inputGrades() = 0;
    virtual void calculateGrade() = 0;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};
class UndergraduateStudent : public Student
{
private:
    int midterm, fnalGrade;

public:
    UndergraduateStudent(string n, string r) : Student(n, r) {}
    void inputGrades() override
    {
        cin >> midterm >> fnalGrade;
    }
    void calculateGrade() override
    {
        int totalGrade = (midterm + fnalGrade) / 2;
        display();
        cout << "Total Grade: " << totalGrade << endl;
    }
};
class GraduateStudent : public Student
{
private:
    int research, presentation;

public:
    GraduateStudent(string n, string r) : Student(n, r) {}
    void inputGrades() override
    {
        cin >> research >> presentation;
    }
    void calculateGrade() override
    {
        int totalGrade = (research + presentation) / 2;
        display();
        cout << "Total Grade: " << totalGrade << endl;
    }
};
int main()
{
    string studentName, rollNo;
    char studentType;
    cin >> studentName >> rollNo >> studentType;
    if (studentType == 'U')
    {
        UndergraduateStudent ug(studentName, rollNo);
        ug.inputGrades();
        ug.calculateGrade();
    }
    else if (studentType == 'G')
    {
        GraduateStudent pg(studentName, rollNo);
        pg.inputGrades();
        pg.calculateGrade();
    }
    return 0;
}