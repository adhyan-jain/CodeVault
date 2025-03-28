/*
Problem Statement

A traffic monitoring system needs a program to assess and report a driver's speed based on the road type and the current speed. The program should take two inputs: the road type (1 for residential, 2 for city, 3 for highway) and the driver's current speed. 

The system should then determine whether the driver is below, at, or above the speed limit for the given road type.

The speed limits for each road type are as follows:
1.	Residential: 25 km/h
2.	City: 35 km/h
3.	Highway: 55 km/h

The output is one of the following:
1.	"Below" if the current speed is below the speed limit.
2.	"Normal" if the current speed is equal to the speed limit.
3.	"Above" if the current speed is above the speed limit.
Input format :
The first line consists of an integer representing the user's choice (1 for Residential Areas, 2 for City Roads, 3 for Highways).
The second line consists of an integer representing the vehicle's speed.
Output format :
Depending on the selected option, the program displays one of the following messages:
1.	"Below" if the current speed is below the speed limit.
2.	"Normal" if the current speed is equal to the speed limit.
3.	"Above" if the current speed is above the speed limit.

Refer to the sample output for formatting specifications.
Code constraints :
In the given scenario, the test cases will fall under the following constraints:
1 ≤ choice ≤ 3
0 < current speed ≤ 100

Sample test cases :
Input 1 :
1
20
Output 1 :
Below
Input 2 :
1
25
Output 2 :
Normal
Input 3 :
2
30
Output 3 :
Below
Input 4 :
3
100
Output 4 :
Above
Input 5 :
2
99
Output 5 :
Above

*/

#include <stdio.h>

int main(){
    int type, speed;
    scanf("%d%d", &type, &speed);
    switch(type){
        case 1:
            if (speed>25){
                printf("Above");
            }
            else if (speed==25){
                printf("Normal");
            }
            else{
                printf("Below");
            }
            break;
        case 2:
            if (speed>35){
                printf("Above");
            }
            else if (speed==35){
                printf("Normal");
            }
            else{
                printf("Below");
            }
            break;
        case 3:
            if (speed>55){
                printf("Above");
            }
            else if (speed==55){
                printf("Normal");
            }
            else{
                printf("Below");
            }
            break;
        
    }
    return 0;
}
