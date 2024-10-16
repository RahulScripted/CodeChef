// Write a program which does the following: Create a string variable word and assign the text "Programming" to it. Print the characters o and r from the string  word in separate lines using the syntax defined above





#include <iostream>
using namespace std;
 
int main() {
    string word;
    word = "Programming";

    for(int i = 0; i < word.size(); i++) {
        if(word[i] == 'o' || word[i] == 'r') {
            cout << word[i] << "\n";
        }
    }
}