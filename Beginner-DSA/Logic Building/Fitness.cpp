// Chef wants to become fit for which he decided to walk to the office and return home by walking. It is known that Chef's office is X km away from his home. If his office is open on 5 days in a week, find the number of kilometers Chef travels through office trips in a week.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X, Y;
        cin >> X;
        Y = (2 * X * 5);
        cout << Y << endl;
    }
}