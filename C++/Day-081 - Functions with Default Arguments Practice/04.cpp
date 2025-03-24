/*
Problem Statement

Rita, a fitness enthusiast and gym trainer, is developing a personalized exercise calorie calculator 
for her clients. The program should calculate the approximate calories burned based on exercise type, 
duration, weight, and intensity.

For different exercise types, the calories burned per minute are as follows:

Running: 9.8 calories per minute (intensity factor applied)
Cycling: 6.7 calories per minute (intensity factor applied)
Swimming: 7.2 calories per minute (intensity factor applied)
Other exercises: 5.0 calories per minute (intensity factor applied)


The program should take the following inputs:

Exercise type (running, cycling, swimming, or other)
Exercise duration (in minutes)
Client's weight (in kilograms)
Exercise intensity (optional, default value is 1.0)
Calculate and display the approximate number of calories burned during the exercise session.

Function specification
calculateCaloriesBurned - This will have an optional parameter intensity with a default value of 1.0.
*/

#include <iostream>

using namespace std;

class A{
    string type;
    double duration;
    double weight;
    double intensity;
    public:
    
        A(string s, double a, double b, double c = 1) : type(s), duration(a), weight(b), intensity(c){}
        
        int calc(){
            double cal=duration*weight*intensity;
            if(type == "running"){
                    cal *= 9.8;
            }
            else if(type == "cycling"){ 
                    cal *= 6.7;
            }
            else if(type == "swimming"){
                    cal *= 7.2;
            }
            else if (type == "other"){
                    cal *= 5.0;
            }
            
            return cal;
        }
};
int main(){
    string s;
    double a, b, c=1;
    
    cin >> s >> a >> b;
    
    if(cin.peek() != ' '){
        cin>>c;
    }
    
    A aa(s, a, b, c);
    
    cout << "You burned approximately " << aa.calc() << " calories." << endl;
    return 0;
}