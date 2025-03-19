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

class Rectangle {
    private:
        static int count;
        int length, width;
    public:
        static int getCount() {
            return count;
        }
        void setDimensions(int l, int w) {
            length = l;
            width = w;
        }
        int getArea() {
            return length * width;
        }
        Rectangle() {
            count++;
        }
};

int Rectangle::count = 0;

int main() {
    int n;
    
    cin >> n;
    Rectangle *rect = new Rectangle[n];
    for (int i = 0; i < n; i++) {
        int l, w;
        
        cin >> l >> w;
        rect[i].setDimensions(l, w);
    }
    cout << "Total number of rectangles: " << Rectangle::getCount() << endl;
    for (int i = 0; i < n; i++) {
        cout << "Area of rectangle " << i+1 << ": " << rect[i].getArea() << endl;
    }
    delete[] rect;
    return 0;
}