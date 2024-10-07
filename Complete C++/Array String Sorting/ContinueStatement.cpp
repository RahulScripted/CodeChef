// Write a program that does the following : Declare a variable n and set it to a user defined input. Output to the console a series of numbers from 0 to 12 with the following condition. Skips the number inserted by the user.





#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i <= 12; i++) {
        if(i == 5) continue;
        cout << i << "\n";
    }   
}