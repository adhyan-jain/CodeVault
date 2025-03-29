/*
Problem statement

Alice is working on a program to manage multiple rectangles using a class named Rectangle. This class 
contains a static data member count to keep track of the total number of rectangle instances created 
and a static member function getCount() that returns the value of count. The class also has non-static 
member functions: setDimensions(int l, int w) to set the length and width of each rectangle and getArea() 
to calculate the area of the rectangle. Whenever a new rectangle is instantiated, the static member 
count is incremented. 

Help Alice to retrieve the total number of rectangles created and calculate the area for each rectangle.


Formula:
Area = length * width
*/

#include <iostream>

using namespace std;

class Rectangle{
    int l;
    int b;
    static int count;
    public:
        void get(int len, int wid){
            l=len;
            b=wid;
        }
        static int getCount(){
            return ++count;
        }
        int getArea(){
            return l*b;
        }
};

int Rectangle :: count=0;

int main(){
    int num;
    cin>>num;
    Rectangle r[num];
    cout << "Total number of rectangles: "<<num<<endl;
    for(int i=0; i<num; i++){
        int l,b;
        cin>>l>>b;
        r[i].get(l,b);
        int c=r[i].getCount();
        int area=r[i].getArea();
        cout<<"Area of rectangle "<<c<<": "<<area<<endl;
    }
    return 0;
}