// Chef likes a football match if

// 1.  The match ends in a draw, and,
// 2.  At least one goal has been scored by either team.

// Given the goals scored by both the teams as X and Y respectively, determine whether Chef will like the match or not.





#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X, Y;
        cin >> X >> Y;
        if (X == Y && (X >= 1 || Y >= 1)) cout << "YES" << endl; 
        else cout << "NO" << endl;
    }
}