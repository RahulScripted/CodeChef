// Declare a variable n and set it to a user defined input. Output to the console a series of numbers from 0 to 12 with the following condition



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i <= 12; i = i + 1) {
        if(i == n) {
            continue;
        }
        cout << i << endl;
    }
}