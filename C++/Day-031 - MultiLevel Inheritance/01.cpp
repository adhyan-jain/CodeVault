// Multilevel Inheritance
// class A -> class B -> class C

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number(void)
{
    cout << "The roll number is: " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "Marks obtained in maths is: " << maths << endl;
    cout << "Marks obtained in physics is: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result();
};

void Result ::display_result()
{
    get_roll_number();
    get_marks();
    cout << "Your percentage is: " << (maths + physics) / 2 << endl;
}

int main()
{
    /*
    Notes:
        If we are inheriting B from A and C from B: [A-->B-->C]
        1. A is the base class of B and B is the base class of C
        2. A-->B-->C is called the Inheritance path
    */
   
    Result Harry;
    Harry.set_roll_number(500);
    Harry.set_marks(85.5, 90.5);
    Harry.display_result();
    return 0;
}