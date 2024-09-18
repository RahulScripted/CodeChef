// Given two integers and two strings as input. Use add function to display the output of both the add functions.




#include <iostream>
#include <string>
using namespace std;

class Adder {
public:
    // Function to add two integers
    int add(int a, int b) {
        return (a + b);
    }

    // Function to concatenate two strings
    string add(string str1, string str2) {
        return (str1 + str2);
    }
};

int main() {
    Adder adder;

    int a,b; 
    cin>>a>>b;
    
    string x,y; 
    cin>>x>>y;

    cout << adder.add(a , b) << endl;
    cout << adder.add(x , y) << endl;
}