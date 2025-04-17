/*
Create a base class Calculations with Three virtual function

double amount()

double Time()

void display()



Create a class Scooty that extends Calculations with distance as its public attribute and overrides the virtual functions as follows.

double amount() - it will return the total amount after 5% discount (Price to travel 1 km is Rs.100, Speed of the Scooty is 40 km/hr)

double Time() - it will return the total hours taken to travel.

Void display() - it will display the Amount and time taken.



Create a class Bike that extends Calculations with distance as its public attribute and overrides the virtual functions as follows.

double amount() - it will return the total amount after 10% discount (Price to travel 1 km is Rs.150 and Speed of the bike is 60Km/hr )

double Time() - it will return the total hours taken to travel.

Void display() - it will display the Amount and time taken.



Create a class Car that extends Calculations with distance as its public attribute and overrides the virtual functions as follows.

double amount() - it will return the total amount after 20% discount (Price to travel 1 km is Rs.200 and Speed of the car is 80Km/hr )

double Time() - it will return the total hours taken to travel.

Void display() - it will display the Amount and time taken.



In the main method, prompt the user to enter the distance and create the necessary objects and call the methods.

Input format :
The input consists of the distance.

Output format :
The output prints the Time taken and the Total Amount for each vehicle (Scooty, Bike, and Car).

Refer to the sample input and output for formatting specifications.

Sample test cases :
Input 1 :
100
Output 1 :
Scooty
Time Taken(in hours) : 2.5
Amount : 9500
Bike
Time Taken(in hours) : 1.66667
Amount : 13500
Car
Time Taken(in hours) : 1.25
Amount : 16000
*/


#include <iostream>
using namespace std;

class Calculations {
public:
virtual double amount() = 0;
virtual double Time() = 0;
virtual void display() = 0;
};

class Scooty : public Calculations {
public:
double distance;
Scooty(double d) {
distance = d;
}

double amount() override {
    double price = 100.0;
    double total = distance * price;
    return total - (total * 0.05); 
}

double Time() override  {    
    double speed = 40.0;
    return distance / speed;
}

void display() override {   
cout << "Scooty" << endl;
cout << "Time Taken(in hours) : " << Time() << endl;
cout << "Amount : " << (int)amount() << endl;  
    
}
};

class Bike : public Calculations {
public:
double distance;
Bike(double d) {
distance = d;
}

double amount() override        {
    double price = 150.0;        
    double total = distance * price;
    return total - (total * 0.10); 
}

double Time() override {
double speed = 60.0;
return distance / speed;
}

void display() override {   
cout << "Bike" << endl;
cout << "Time Taken(in hours) : " << Time() << endl;
cout << "Amount : " << (int)amount() << endl;  
    
}
};

class Car : public Calculations {
public:
double distance;
Car(double d) {
distance = d;
}

double amount() override {        
double price = 200.0;
double total = distance * price;
return total - (total * 0.20); // 20% discdiscount    
}

double Time() override {
    double speed = 80.00;
    return distance / speed;
    
}

void display() override {   
cout << "Car" << endl;
cout << "Time Taken(in hours) : " << Time() << endl;
cout << "Amount : " << (int)amount() << endl;  
    
}
};

int main() {
double d; 
cin >> d;

Scooty s(d);

Bike b(d);
Car c(d);

s.display();
b.display();
c.display();

return 0;
}
