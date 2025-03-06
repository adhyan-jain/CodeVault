// Multiple Inheritance

#include <iostream>
using namespace std;

// Syntax of Multiple Inheritance
// class Derived : visibiltiy-mode base1, visibility-mode base2{
// class body of class Derived
// };

class Base1
{
protected:
    int base1Int;

public:
    void set_base1Int(int a)
    {
        base1Int = a;
    }
};

class Base2
{
protected:
    int base2Int;

public:
    void set_base2Int(int a)
    {
        base2Int = a;
    }
};

class Base3
{
protected:
    int base3Int;

public:
    void set_base3Int(int a)
    {
        base3Int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is: " << base1Int << endl;
        cout << "The value of Base2 is: " << base2Int << endl;
        cout << "The value of Base1 is: " << base3Int << endl;
        cout << "The sum of these vaues is: " << base1Int + base2Int + base3Int << endl;
    }
};

/*
The inherited derived class will look something like this:
Data members:
    base1Int -> protected
    base2Int -> protected
    base3Int -> protected
Member functions:
    set_base1Int -> public
    set_base2Int -> public
    set_base3Int -> public
*/


int main()
{
    Derived Harry;
    Harry.set_base1Int(23);
    Harry.set_base2Int(43);
    Harry.set_base3Int(33);
    Harry.show();
    return 0;
}