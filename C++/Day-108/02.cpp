/*
Problem Statement



Shabu manages a laptop assembly line and needs a program to handle different laptop models. He wants to add new models along with their assembly steps, update the assembly steps of existing models, and display all the models in production.



Help Shabu by implementing a program that utilizes function templates for adding, updating, and displaying laptop models. Ensure the program allows continuous operation until the user decides to exit.

Input format :
The input is given in multiple lines. Each line contains an integer representing the user's choice (1, 2, 3, or 4) for the corresponding operation.



For choice 1 (Add a new laptop model to the production line):

The next two lines contain the laptop model name (a string) and the number of assembly steps (an integer).



For choice 2 (Update the number of assembly steps for an existing laptop model):

The next line contains the laptop model name (a string).

The next line contains the new number of assembly steps (an integer).



For choice 3 (Display all laptop models and their respective assembly steps), no additional input is required.



For choice 4 (Exit the program), no additional input is required and this is a mandatory input that should be given for all inputs.

Output format :
For adding a model:

If successful: "Model Name - Added"
If the production line is full: "Production line is full. Cannot add more laptop models!"
For updating assembly steps:

If the model is found: "Model Name - Updated"
If the model is not found: "Model Name - Not found"
When displaying models:

Each line in the format: "Model Name: [model_name], Assembly Steps: [assembly_steps]"


Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ Number of models ≤ 15

Model names are strings with a maximum length of 100 characters.

0 ≤ assembly steps ≤ 1000

Sample test cases :
Input 1 :
1
Laptop Model 1
10
2
Laptop Model 1
20
3
4
Output 1 :
Laptop Model 1 - Added
Laptop Model 1 - Updated

Model Name: Laptop Model 1, Assembly Steps: 20
Input 2 :
1
Laptop Model 1
10
2
Laptop Model 2
20
3
4
Output 2 :
Laptop Model 1 - Added
Laptop Model 2 - Not found

Model Name: Laptop Model 1, Assembly Steps: 10
Input 3 :
1
Laptop Model 1
10
1
Laptop Model 2
20
1
Laptop Model 3
30
1
Laptop Model 4
40
1
Laptop Model 5
50
1
Laptop Model 6
60
1
Laptop Model 7
70
1
Laptop Model 8
80
1
Laptop Model 9
90
1
Laptop Model 10
100
3
4
Output 3 :
Laptop Model 1 - Added
Laptop Model 2 - Added
Laptop Model 3 - Added
Laptop Model 4 - Added
Laptop Model 5 - Added
Laptop Model 6 - Added
Laptop Model 7 - Added
Laptop Model 8 - Added
Laptop Model 9 - Added
Laptop Model 10 - Added

Model Name: Laptop Model 1, Assembly Steps: 10
Model Name: Laptop Model 2, Assembly Steps: 20
Model Name: Laptop Model 3, Assembly Steps: 30
Model Name: Laptop Model 4, Assembly Steps: 40
Model Name: Laptop Model 5, Assembly Steps: 50
Model Name: Laptop Model 6, Assembly Steps: 60
Model Name: Laptop Model 7, Assembly Steps: 70
Model Name: Laptop Model 8, Assembly Steps: 80
Model Name: Laptop Model 9, Assembly Steps: 90
Model Name: Laptop Model 10, Assembly Steps: 100
Input 4 :
1
Model 1
50
6
4
Output 4 :
Model 1 - Added
Invalid choice
Input 5 :
1
Laptop Model 1
10
1
Laptop Model 2
20
1
Laptop Model 3
30
1
Laptop Model 4
40
1
Laptop Model 5
50
1
Laptop Model 6
60
1
Laptop Model 7
70
1
Laptop Model 8
80
1
Laptop Model 9
90
1
Laptop Model 10
100
1
Laptop Model 11
110
1
Laptop Model 12
120
1
Laptop Model 13
130
1
Laptop Model 14
140
1
Laptop Model 15
150
1
Laptop Model 16
160
3
4
Output 5 :
Laptop Model 1 - Added
Laptop Model 2 - Added
Laptop Model 3 - Added
Laptop Model 4 - Added
Laptop Model 5 - Added
Laptop Model 6 - Added
Laptop Model 7 - Added
Laptop Model 8 - Added
Laptop Model 9 - Added
Laptop Model 10 - Added
Laptop Model 11 - Added
Laptop Model 12 - Added
Laptop Model 13 - Added
Laptop Model 14 - Added
Laptop Model 15 - Added
Production line is full. Cannot add more laptop models!

Model Name: Laptop Model 1, Assembly Steps: 10
Model Name: Laptop Model 2, Assembly Steps: 20
Model Name: Laptop Model 3, Assembly Steps: 30
Model Name: Laptop Model 4, Assembly Steps: 40
Model Name: Laptop Model 5, Assembly Steps: 50
Model Name: Laptop Model 6, Assembly Steps: 60
Model Name: Laptop Model 7, Assembly Steps: 70
Model Name: Laptop Model 8, Assembly Steps: 80
Model Name: Laptop Model 9, Assembly Steps: 90
Model Name: Laptop Model 10, Assembly Steps: 100
Model Name: Laptop Model 11, Assembly Steps: 110
Model Name: Laptop Model 12, Assembly Steps: 120
Model Name: Laptop Model 13, Assembly Steps: 130
Model Name: Laptop Model 14, Assembly Steps: 140
Model Name: Laptop Model 15, Assembly Steps: 150
*/

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Line {
private:
struct Model {
string name;
T steps;
};
Model models[15];
int count;

public:
Line() : count(0) {}

void add(const string& name, T steps) {
if (count < 15) {
models[count].name = name;
models[count].steps = steps;
count++;
cout << name << " - Added" << endl;
} else {
cout << "Production line is full. Cannot add more laptop models!" << endl;
}
}

void update(const string& name, T steps) {
bool found = false;
for (int i = 0; i < count; ++i) {
if (models[i].name == name) {
models[i].steps = steps;                
found = true;
cout << name << " - Updated" << endl;
break;
}
}
if (!found) {
cout << name << " - Not found" << endl;
}
}

void display() const {
for (int i = 0; i < count; ++i) {
cout << "Model Name: " << models[i].name << ", Assembly Steps: " << models[i].steps << endl;
}
}
};

int main() {
Line<int> line;
int choice;
string name;
int steps;
while (true) {
cin >> choice;
if (choice == 1) {
cin.ignore();
getline(cin, name);
cin >> steps;
line.add(name, steps);
} else if (choice == 2) {
cin.ignore();
getline(cin, name);
cin >> steps;
line.update(name, steps);
} else if (choice == 3) {
line.display();
} else if (choice == 4) {
break;
} else {
cout << "Invalid choice" << endl;
}
}

return 0;
}