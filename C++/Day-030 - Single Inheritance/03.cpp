#include <iostream>
using namespace std;

class Base{
    protected:
        int a;
    public:
        int b;
};

/*
For a protected member:
                        public visibilty      Private visibilty         Protected visibilty
1. private members        not inherited       not inherited              not inherited
2. protected members       Protected          Private                    Protected
3. public members           public            Private                    Protected
*/

class Derived : protected Base{

};

int main(){
    Base b;
    Derived d;
    // Will not work since a is protected in both base as well as Derived class
    // cout<<b.a;
    // cout<<d.a;  
    return 0;
}