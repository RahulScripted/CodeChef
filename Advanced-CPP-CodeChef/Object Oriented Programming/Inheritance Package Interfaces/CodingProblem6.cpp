// Given a,b,c as input, Implement these classes and create an instance of class D with integer values for a, b, and c. Then, call the display() function of the D object to print the output.




#include <iostream>
using namespace std;

// Virtual base class A (Class A)
class A {
public:
    int a;

    A(int _a) : a(_a) {}

    virtual void display() {
        cout << a << endl;
    }
};

// Derived class B (Class B)
class B : virtual public A {
public:
    int b;
    B(int _a, int _b) : A(_a), b(_b) {}

    void display() {
        A::display();
        cout << b << endl;
    }
};

// Derived class C (Class C)
class C : virtual public A {
public:
    int c;

    C(int _a, int _c) : A(_a), c(_c) {}

    void display()  {
        A::display();
        cout << c << endl;
    }
};

// Derived class D (Class D)
class D : public B, public C {
public:
    D(int _a, int _b, int _c)
        : A(_a), B(_a, _b), C(_a, _c) {}

    void display()  {
        B::display();
        C::display();
    }
};

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    
    D obj(a,b,c);
    obj.display();
    return 0;
}
