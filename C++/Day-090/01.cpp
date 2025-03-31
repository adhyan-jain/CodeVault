/*
Problem Statement



Write a program that calculates the total calories burned during different types of exercises. It includes three types of exercises: Cardio, Weightlifting, and Cycling. These exercises are organized in a hierarchy of classes. The Exercise class serves as the base class, and the specific exercise types are derived from it.



The Exercise class has two protected member variables: duration and weight. It also contains a constructor that initializes these variables and a pure virtual function calculateCaloriesBurned(), which must be implemented by the derived classes.



The derived classes in the hierarchy are as follows:



Cardio class: This class represents a cardio exercise. It inherits from the Exercise class and has an additional private member variable called intensity. The Cardio class implements the calculateCaloriesBurned() function to calculate the total calories burned during the cardio exercise based on the duration, weight, and intensity of the exercise.



Weightlifting class: This class represents a weightlifting exercise. It also inherits from the Exercise class and has an additional private member variable called repetitions. The Weightlifting class implements the calculateCaloriesBurned() function to calculate the total calories burned during the weightlifting exercise based on the duration, weight, and number of repetitions.



Cycling class: This class represents a cycling exercise. It also inherits from the Exercise class and has an additional private member variable called speed. The Cycling class implements the calculateCaloriesBurned() function to calculate the total calories burned during the cycling exercise based on the duration, weight, and cycling speed.



Note: The formula for calculating calories burned in Cardio exercise is:

caloriesPerMinute = 8 * intensity * weight / 200

totalCaloriesBurned = caloriesPerMinute * duration

The formula for calculating calories burned in Weightlifting exercise is:

caloriesPerRep = 5 * weight / 100

totalCaloriesBurned = caloriesPerRep * repetitions * duration

The formula for calculating calories burned in Cycling exercise is:

caloriesPerMinute = 10 * speed * weight / 500

totalCaloriesBurned = caloriesPerMinute * duration

Input format :
The input consists of three lines:



The exercise duration (an integer).

The weight of the person (an integer).

The exercise type (an integer) - 1 for Cardio, 2 for Weightlifting, 3 for Cycling.

Output format :
The program outputs print the total calories burned during the exercise (an integer) followed by the word "calories".

Sample test cases :
Input 1 :
30
70
1
3
Output 1 :
Total calories burned: 240 calories
Input 2 :
40
60
2
15
Output 2 :
Total calories burned: 1800 calories

*/

#include <iostream>

using namespace std;

class Exercise{
    protected:
        int duration;
        int weight;
    public:
        Exercise(int a, int b) : duration(a), weight(b) {}
        
        virtual int calculateCaloriesBurned() = 0;
        
        virtual ~Exercise(){ }
};

class Cardio : public Exercise{
    int intensity;
    public:
        Cardio(int a, int b, int c) : Exercise(a, b), intensity(c) {}
        
        int calculateCaloriesBurned() override
        {
            int caloriesPerMinute = 8 * intensity * weight / 200;
            return caloriesPerMinute * duration;
        }
};

class Weightlifting : public Exercise{
    int repetitions;
    public:
        Weightlifting(int a, int b, int c) : Exercise(a, b), repetitions(c) {}
        
        int calculateCaloriesBurned() override
        {
            int caloriesPerRep = 5 * weight / 100;
            return caloriesPerRep * repetitions * duration;
        }
};

class Cycling : public Exercise{
    int speed;
    public:
        Cycling(int a, int b, int c) : Exercise(a, b), speed(c) {}
        
        int calculateCaloriesBurned() override
        {
            int caloriesPerMinute = 10 * speed * weight / 500;
            return caloriesPerMinute * duration;
        }
};


int main(){
    int a, b, c, d1, d2, d3;
    cin >> a >> b >> c;
    Exercise* e = nullptr;
    if(c==1){
        cin >> d1;
        e = new Cardio(a, b, d1);
    }
    else if(c==2){
        cin >> d2;
        e = new Weightlifting(a, b, d2);
    }
    else if(c==3){
        cin >> d3;
        e = new Cycling(a, b, d3);
    }
    cout << "Total calories burned: " << e->calculateCaloriesBurned() << " calories";
    
    delete e;
    
    return 0;
}