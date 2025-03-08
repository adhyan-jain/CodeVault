/*

Assignment Due
You are eagerly awaiting for the upcoming Technex event organized by IIT BHU Varanasi! However, you also have an assignment due. The deadline for the assignment is in YY days, and it takes you XX days to complete it.
Determine whether you can finish the assignment on or before the deadline.
Input Format
The input consists of two space-separated integers XX and YY, where:
•	XX denotes the number of days required to complete the assignment.
•	YY denotes the number of days remaining until the deadline.
Output Format
Print YES if you can complete the assignment on or before the due date, otherwise print NO
You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).
Constraints
•	1≤X≤1001≤X≤100
•	1≤Y≤1001≤Y≤100
Sample 1:
Input
Output
1 2
YES
Explanation:
You have 22 days to complete the assignment, and it will take you only 11 day to finish it.
Sample 2:
Input
Output
2 2
YES
Explanation:
You have 22 days to complete the assignment, and it will take you only 22 day to finish it.
Sample 3:
Input
Output
3 2
NO
Explanation:
You have 22 days to complete the assignment, but it will take you 33 days to finish, making it impossible for you to meet the deadline.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    if(x<=y){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
