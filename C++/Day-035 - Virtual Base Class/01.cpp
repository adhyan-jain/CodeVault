#include <iostream> 
using namespace std; 
class A { 
public: 
    void say() 
    { 
        cout << "Hello world"<<endl; 
    } 
}; 
class B : public virtual A { 
};   
class C : public virtual A { 
};   
class D : public B, public C { 
}; 
int main() {
    D d; // D is a derived class of A through both B and C
    d.say(); // Output: Hello world
    return 0;
}
