/*
Problem Statement



Helen wants to create a program for student record management with a class hierarchy. 



Help her write a program that utilizes hybrid inheritance using the below information.

A base class: Person holds attributes name and ID. 
Another base class: Score contains the student's score. 
Two derived classes: UndergraduateStudent and PostgraduateStudent, inherit from both Person and Score classes, calculate and display the grade and results respectively. 


For Undergraduate Students, Grade is calculated as:

If the score is 90 or above, the grade is 'A'.
If the score is 80 to 89, the grade is 'B'.
If the score is 70 to 79, the grade is 'C'.
If the score is 60 to 69, the grade is 'D'.
If the score is below 60, the grade is 'F'.


For Postgraduate Students, Result is calculated as:

If the score is 60 or above, the result is 'Pass'.
If the score is below 60, the result is 'Fail'.
Input format :
The first line of input consists of a string, representing the UG student's name.

The second line consists of a string, representing the UG student's ID.

The third line consists of a double value, representing the UG student's score.

The fourth line consists of a string, representing the PG student's name.

The fifth line consists of a string, representing the PG student's ID.

The sixth line consists of a double value, representing the PG student's score.

Output format :
The first line of output prints the grade of UG student in the format: "Student [UG Student's Name] with ID [UG Student's ID] received grade [UG Student's Grade]."

The second line prints the result of the PG student in the format: "Student [PG Student's Name] with ID [PG Student'S ID] [Pass/Fail] the course."



Refer to the sample outputs for formatting specifications.

Code constraints :
10.0 ≤ score ≤ 100.0

Sample test cases :
Input 1 :
John
CS101
75.5
Alice
ECE111
55.0
Output 1 :
Student John with ID CS101 received grade C.
Student Alice with ID ECE111 Fail the course.
Input 2 :
Mary
EEE65
85.0
David
CSE13
92.5
Output 2 :
Student Mary with ID EEE65 received grade B.
Student David with ID CSE13 Pass the course.
Input 3 :
Ella
ECE20
45.5
George
Mech101
30.8
Output 3 :
Student Ella with ID ECE20 received grade F.
Student George with ID Mech101 Fail the course.

*/

#include <iostream>

using namespace std;

class Person{
    protected:
        string name;
        string id;
    public:
        Person(string a, string b) : name(a), id(b){}
};

class Score{
    protected:
        double score;
    public:
        Score(double a) : score(a){}
};

class UndergraduateStudent: public Person, public Score{
    public:
        UndergraduateStudent(string a, string b, double c) : Person(a, b), Score(c){}
        
        void display(){
            char grade;
            if(score >= 90){
                grade = 'A';
            }
            else if(score >= 80){
                grade = 'B';
            }
            else if(score >= 70){
                grade = 'C';
            }
            else if(score >= 60){
                grade = 'D';
            }
            else {
                grade = 'F';
            }
            
            cout << "Student " << name << " with ID " << id << " received grade " << grade << "." << endl;
        }
};

class PostgraduateStudent : public Person, public Score{
    public:
        PostgraduateStudent(string a, string b, double c) : Person(a, b), Score(c){}
        
        void display(){
            string s;
            
            if(score >= 60){
                s = "Pass";
            }
            else {
                s = "Fail";
            }
            
            cout << "Student " << name << " with ID " << id << " " << s << " the course." << endl;
        }
};

int main(){
    string s1, s2;
    string id1, id2;
    double m1, m2;
    
    cin >> s1 >> id1 >> m1 >> s2 >> id2 >> m2;
    
    UndergraduateStudent u(s1, id1, m1);
    PostgraduateStudent p(s2, id2, m2);
    
    u.display();
    p.display();
    
    
    return 0;
}