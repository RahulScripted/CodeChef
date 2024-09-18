// Chef's current rating is X, and he wants to improve it. It is generally recommended that a person with rating X should solve problems whose difficulty lies in the range [X,X + 200], i.e, problems whose difficulty is at least X and at most X + 200. You find out that Chef is currently solving problems with a difficulty of Y. Is Chef following the recommended practice or not?





#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X, Y;
        cin >> X >> Y;
        if (X <= Y && (X + 200) >= Y) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}