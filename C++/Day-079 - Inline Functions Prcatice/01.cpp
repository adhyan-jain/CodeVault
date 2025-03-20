/*
Problem Statement

You have been assigned the responsibility of implementing the Area class for the construction company's 
software application.

You have declared the following inline functions within the Area class: get(), squareArea(), 
rectangleArea(), circleArea(), and parallelogramArea(). These functions are used to calculate the 
area of different geometric shapes.

Include the necessary code for the class definition and method implementations. Then, create an 
object of the Area class in the main method and demonstrate how the methods can be called to 
calculate the areas of squares, rectangles, circles, and parallelograms. Provide the complete 
code solution, including the class definition, method implementations, and the main method where 
the object is created and the methods are called.

Note: This is a sample question asked in a HCL interview.

Formula:

Area of the square = side*side
Area of the rectangle = length*breadth 
Area of the circle =3.14*radius*radius 
Area of the parallelogram = base*height
*/

#include <bits/stdc++.h>
using namespace std;
class Area
{
	int side,length,breadth;
	float radius,base,height;
public:
	void get();
	void squareArea();
	void rectangleArea();
	void circleArea();
	void parallelogramArea();
};
inline void Area :: get()
{
	cin >> side;
	cin >> length >> breadth;
	cin >> radius;
	cin >> base >> height;
}

inline void Area :: squareArea()
{
	cout << "Area of the square: " << side*side << "\n";
}

inline void Area :: rectangleArea()
{
	cout << "Area of the rectangle: " << length*breadth << "\n";
}

inline void Area :: circleArea()
{
	cout << "Area of the circle: " << fixed << setprecision(2) << 3.14*radius*radius << "\n";
}

inline void Area ::parallelogramArea()
{
	cout<<"Area of the parallelogram: "<<base*height<<"\n" ;
}
int main()
{
	Area a;
	a.get();
	a.squareArea();
	a.rectangleArea();
	a.circleArea();
	a.parallelogramArea();
	return 0;
}