/*
Technex Tickets
You are standing in a queue that is infinitely long, waiting to get tickets for various events during Technex.
The ticket distribution follows these rules:
•	Every second, tickets are given to the 1st1st and 3rd3rd persons in the queue.
•	After receiving their tickets, those people leave the queue.
•	The person who was originally in the 2nd2nd position (before the 1st1st and 3rd3rd people left) moves up to the 1st1st position.
•	This process repeats every second, with the 1st1st and 3rd3rd persons receiving tickets and leaving.
Initially, you are at position NN in the queue.
Determine after how many seconds you will get the tickets.
Input Format
•	The first line of input will contain a single integer TT, denoting the number of test cases.
•	Each test case contains a single line of input NN your initial position in the line.
Output Format
For each test case, output on a new line after how many seconds will you get the tickets.
Constraints
•	1≤T≤1000
•	1≤N≤1000
Sample 1:
Input
5
1
2
3
4
5
Output
1
2
1
3
2
Explanation:
•	At 1st second, person at position 1 and position 3 will get ticket.
•	At 2nd second, person at position 2 and position 5 will get ticket, as they are now at position 1 and 3.
•	At 3rd second, person at position 4 and position 7 will get ticket.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
	vector<int>v(n);
	int arr[n];
	for(int i=0; i<n; i++){
	    cin>>v[i];
	}
	int c=2;
	for(int i=0; i<n; i++){
	    if(i==0){
	        arr[i]=i+1;
	        continue;
	    }
	    if(!(i%2==0)){
	        arr[i]=c;
	        c++;
	        continue;
	    }
	    if(i%2==0){
	        arr[i]=arr[i-1]-1;
	        continue;
	    }
	}
	for(auto x:arr){
	    cout<<x<<endl;
	}
}
