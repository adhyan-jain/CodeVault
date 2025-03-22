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

struct Exercise {
    string exerciseType;
    double duration; 
};

double calculateCaloriesBurned(const Exercise& exercise, double weight, double intensity = 1.0) {
    double caloriesPerMinute;

    if (exercise.exerciseType == "running") {
        caloriesPerMinute = 9.8 * intensity; 
    } else if (exercise.exerciseType == "cycling") {
        caloriesPerMinute = 6.7 * intensity; 
    } else if (exercise.exerciseType == "swimming") {
        caloriesPerMinute = 7.2 * intensity;
    } else {
        caloriesPerMinute = 5.0 * intensity;
    }

    return caloriesPerMinute * exercise.duration * weight;
}

int main() {
    Exercise userExercise;
    cin >> userExercise.exerciseType;
    cin >> userExercise.duration;
    double userWeight;
    cin >> userWeight;
    double userIntensity = 1.0;
    cin >> userIntensity;
    double burnedCalories = calculateCaloriesBurned(userExercise, userWeight, userIntensity);
    cout << "You burned approximately " << burnedCalories << " calories." << endl;

    return 0;
}