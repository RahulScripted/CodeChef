// Writing a class in C++ involves defining the structure and behavior of objects based on the principles of object-oriented programming. Here's a step-by-step guide on how to write a basic class in C++:




#include<bits/stdc++.h>
using namespace std;

// Step 1: Define the class
class MyClass {
    // Step 2: Declare private members (data and functions)
    private:
        int privateValue;

    // Step 3: Declare public members (data and functions)
    public:
        int publicValue;

        void publicFunction() {
            cout<<publicValue<<endl;
        }
};

int main() {
    // Step 4: Create an object of the class
    MyClass obj;

    // Step 5: accessing and changing the object's public data
    obj.publicValue = 10;

    // Step 6: Use the object's public functions
    obj.publicFunction();
}