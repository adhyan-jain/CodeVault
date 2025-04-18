/*
Problem Statement



Jaani is developing a web application and needs to manage URLs and their indexing statuses. He wants to create a program that stores webpage URLs and their corresponding indexing statuses, allowing for dynamic resizing when adding new URLs. Additionally, Jaani needs to update the indexing status of a specific URL.



Help him implement this program using a function template to handle the dynamic array operations.

Input format :
The first line contains an integer N, representing the number of URLs.

Each of the next N lines contains:

A string representing the webpage URL.
An integer (0 or 1) representing the indexing status (1 for "Indexed successfully" and 0 for "Indexing failed").
Output format :
For each URL, output the format:

"[URL]: Indexed successfully" if the status is 1

"[URL]: Indexing failed" if the status is 0



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ N ≤ 20

Each URL is a string with a maximum length of 2048 characters.

The indexing status is either 0 (failed) or 1 (successful).

Sample test cases :
Input 1 :
3
https://www.example.com 1
https://www.google.com 0
https://www.website.com 1
Output 1 :
https://www.example.com: Indexed successfully
https://www.google.com: Indexing failed
https://www.website.com: Indexed successfully
*/


#include <iostream>
#include <string>
using namespace std;

template <typename T>
class URLManager {
private:
struct URLInfo {
string url;
T status;
};
URLInfo* urls;
int size;
int capacity;
public:
URLManager(int capacity) {
    this->capacity = capacity;
    size = 0;
    urls = new URLInfo[capacity];
}

~URLManager() {
    delete[] urls;
}

void addURL(const string& url, T status) {
if (size < capacity) {
    urls[size].url = url;           
    urls[size].status = status;
    size++;
}
}

void display() const {
for (int i = 0; i < size; ++i) {
if (urls[i].status == 1) {
    cout << urls[i].url << ": Indexed successfully" << endl;
} else {
    cout << urls[i].url << ": Indexing failed" << endl;
}
}
}
};

int main() {
int N;
cin >> N;
URLManager<int> manager(N);

for (int i = 0; i < N; ++i) {
string url;
int status;
cin >> url >> status;
manager.addURL(url, status);
}

manager.display();

return 0;
}