/*
Problem Statement

John wants to create a program using a class called Weather to compare historical and current weather 
data. Predict if it's getting warmer, colder, or staying the same based on temperature comparisons 
and forecast changes in weather conditions. Implement the code by passing an object as a function argument.


If current temperature > historical temperature, output: "Warmer"
If current temperature < historical temperature, output: "Colder"
If current temperature = historical temperature, output: "Same temperature"
If current weather conditions = historical conditions, output: "Same conditions: " followed by the weather conditions.
If current weather conditions differ from historical conditions, output: "Conditions changing to: " followed by the current weather condition.
*/

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class Weather{
    float temp;
    string cond;
    public:
        Weather(float n, string s){
            temp=n;
            cond=s;
        }
        void func(float temps, string s2){
            if(temp>temps){
                cout<<"Colder"<<endl;
            }
            else if(temp<temps){
                cout<<"Warmer"<<endl;
            }
            else{
                cout<<"Same temperature"<<endl;
            }
        }
        
        void func2(float temps, string s2){
            if(cond==s2){
                cout<<"Same conditions: "; 
            }else{
                cout<<"Conditions changing to: ";
            }
            cout<<s2;
        }
};

int main(){
    float temp;
    string s1;
    cin>>temp;
    cin.ignore();
    getline(cin, s1);
    
    Weather e1(temp, s1);
    
    float temp2;
    string s2;
    cin>>temp2;
    cin.ignore();
    getline(cin, s2);
   
    e1.func(temp2, s2);
    e1.func2(temp2, s2);
    return 0;
}