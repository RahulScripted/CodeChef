// Write a program to print the length of each word of the sentence given below as well as the length of the whole sentence "Coding on CodeChef".


#include <iostream>
using namespace std;
int main() {
    string one = "Coding";
    string two = "on";
    string three = "CodeChef";

    cout<<one<<" - "<<one.length()<<endl;
    cout<<two<<" - "<<two.length()<<endl;
    cout<<three<<" - "<<three.length()<<endl;
    
    string str = one + " "+ two + " " + three;
    cout<<str<<" - "<<str.length()<<endl;
}