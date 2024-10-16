// Write a program which does the following: Initialise a string variable word and assign the value "Ocygen" to it. You now want to fix the typo in the given string. Use the syntax explained above to replace 'c' with 'x' in the variable word. Output the updated word to console





#include <iostream>
using namespace std;

int main() {
    string word = "Ocygen";
    word[1] = 'x';
    cout << word << "\n";
}