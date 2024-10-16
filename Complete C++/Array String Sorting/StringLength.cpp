// Write a program which does the following: Create a variable txt and assign it the text "NumeroTres". Use the strlen() function to output to the console the number of characters in txt





#include <iostream>
using namespace std;
 
int main() {
    string txt = "NumeroTres";
    int sz = txt.length();
    cout << "The length of the word is: " << sz;
}