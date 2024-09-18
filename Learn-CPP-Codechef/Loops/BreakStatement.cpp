// Initialise an integer variable i to 0. Output to the console i from 0 to 15 using a for loop. Stop execution when the value of i reaches 13




#include <bits/stdc++.h>
using namespace std;

int main() {

    for (int i = 0; i <= 15; i = i + 1) {
        if (i == 13) break;
        cout << i << endl;
    }
}