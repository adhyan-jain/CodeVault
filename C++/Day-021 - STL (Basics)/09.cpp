// Maps
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    m["Ayush"] = 11;
    m["Harsh"] = 22;
    m["Atharva"] = 23;

    cout << m["Ayush"] << endl;

    // To check if a key exists use m.count()
    cout << m.count("Ankit") << endl;
    // Default value fo key not present in map is 0
    cout << m["Ankit"] << endl;

    cout << "Printing the map: " << endl;
    // x.first -> key, x.second -> value
    for (auto x : m)
    {
        cout << x.first << " : " << x.second << endl;
    }
    cout << "Erasing a key from the map";
    m.erase("Ayush");

    cout << "Printing the map: " << endl;
    for (auto x : m)
    {
        cout << x.first << " : " << x.second << endl;
    }
    return 0;
}