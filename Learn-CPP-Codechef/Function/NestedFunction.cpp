// What is nested function




#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;

void printGreeting(const string& name) {
    string upperGreeting = "Hello, " + name + "!";

    transform(upperGreeting.begin(), upperGreeting.end(), upperGreeting.begin(), ::toupper);
    
    cout << "Final Result: " << upperGreeting << endl;
}

int main() {
    string name = "Alice";
    printGreeting(name);   
}