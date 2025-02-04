// Program that determines the grade of a student based on their score

#include <iostream>

using namespace std;

int main(){
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if (marks>100 || marks<0)
        cout<<"Invalid Input";
    else if (marks>=90)
        cout<<"Grade: S";
    else if (marks>=80)
        cout<<"Grade: A";
    else if (marks>=70)
        cout<<"Grade: B";
    else if (marks>=60)
        cout<<"Grade: C";
    else if (marks>=50)
        cout<<"Grade: D";
    else
        cout<<"Grade: Fail";
    return 0;
}