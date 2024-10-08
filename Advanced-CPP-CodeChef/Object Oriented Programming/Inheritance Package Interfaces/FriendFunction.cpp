// In C++, a friend function is a function that is not a member of a class but is granted special access to the private and protected members of the class. It is often used to allow external functions or classes to operate on a class's private or protected data.





#include <iostream>
using namespace std;

class MyClass {
private:
    int privateVar;

public:
    MyClass(int val) {
        privateVar = val;
    }

    // Declare a friend function
    friend void friendFunction(MyClass& obj);

    int getData(){
        return privateVar;
    }
};

// Define the friend function
void friendFunction(MyClass& obj) {
    // Access and modify the private member of MyClass
    obj.privateVar += 10;
}

int main() {
    MyClass obj(42);

    // Call the friend function to modify the private member
    friendFunction(obj);

    // Access the modified private member
    cout << "Modified privateVar: " << obj.getData() << endl;

    return 0;
}