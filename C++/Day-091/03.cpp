/*

Implement a program that utilizes multiple inheritance to assess John's health. 



Create a class BMI with weight and height as attributes and create a method calculateBMI() to compute the BMI. Create a class BloodPressure with systolic and diastolic pressures as attributes to compute health metrics.



In the Health class, inherit from both classes BMI and BloodPressure to provide an integrated health assessment. Input John's weight, height, systolic, and diastolic values and determine his health status.



Check health status based on Body Mass Index (BMI) and blood pressure readings:

Underweight with Low Blood Pressure: BMI < 18.5 && systolic < 90 && diastolic < 60
Healthy Weight with Normal Blood Pressure: BMI >= 18.5 and BMI < 24.9 && systolic >= 90 && systolic <= 120 && diastolic >= 60 && diastolic <= 80
Overweight with High Blood Pressure: BMI >= 25.0 and BMI < 29.9 && systolic > 120 && diastolic > 80
Health Risk Undefined: Otherwise


Note: BMI = weight / height2

Input format :
The first line of input consists of a double value, representing the individual's weight in kilograms.

The second consists of a double value, representing the height in meters.

The third line consists of an integer, representing the systolic blood pressure measurement.

The fourth line consists of an integer, representing the diastolic blood pressure measurement.

Output format :
The first line of output prints the BMI result, rounded off to two decimal places.

The second line prints the overall health status.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

10.0 ≤ weight ≤ 100.0

0.5 ≤ height ≤ 2.5

40 ≤ systolic, diastolic blood pressure ≤ 200

Sample test cases :
Input 1 :
48.0
1.65
80
50
Output 1 :
BMI: 17.63
Health Status: Underweight with Low Blood Pressure
Input 2 :
70.0
1.75
115
75
Output 2 :
BMI: 22.86
Health Status: Healthy Weight with Normal Blood Pressure
Input 3 :
90.0
1.70
135
90
Output 3 :
BMI: 31.14
Health Status: Health Risk Undefined
Input 4 :
40.6
1.26
121
92
Output 4 :
BMI: 25.57
Health Status: Overweight with High Blood Pressure

*/

#include <iostream>
#include <iomanip>

using namespace std;

class BMI{
    protected:
        double weight;
        double height;
    public:
        BMI(double a, double b) : weight(a), height(b) {}
        
        double calculateBMI(){
            double b = weight / (height * height);
            return b;
        }
};

class BloodPressure{
    protected:
        int s_bp;
        int d_bp;
    public:
        BloodPressure(int a, int b) : s_bp(a), d_bp(b){}
};

class Health : public BMI, public BloodPressure{
    public:
        Health(double a, double b, int c, int d) : BMI(a, b), BloodPressure(c, d) {}
        
        void display(){
            double b = calculateBMI();
            cout << "BMI: " << fixed<< setprecision(2) <<  weight/(height*height) << endl;
            
            string s;
            
            if(b < 18.5 && s_bp < 90 && d_bp < 60){
                s = "Underweight with Low Blood Pressure";
            }
            else if(b >= 18.5 && b < 24.9 && s_bp >= 90 && s_bp <= 120 && d_bp >= 60 && d_bp <=80){
                s = "Healthy Weight with Normal Blood Pressure";
            }
            else if(b >= 25 && b < 29.9 && s_bp >120 && d_bp > 80){
                s = "Overweight with High Blood Pressure";
            }
            else {
                s = "Health Risk Undefined";
            }
            
            cout << "Health Status: " << s << endl;
            
        }
};

int main(){
    double a, b;
    int c, d;
    
    cin >> a >> b >> c >> d;
    
    Health h(a, b , c, d);
    h.display();
    return 0;
}