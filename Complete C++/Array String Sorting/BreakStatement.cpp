// Write a program which does the following : Initialise an integer variable i to 0. Output to the console i from 0 to 15 using a for loop. Stop execution when the value of i reaches 13




#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i <= 15; i++){
        if(i == 13) break;
        cout << i << "\n";
    }
}
