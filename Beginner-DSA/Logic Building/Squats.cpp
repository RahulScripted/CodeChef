// You decided to do X sets of squats at the gym today.Each set consists of 15 squats. Determine the total number of squats that you did today.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X, Y;
        cin >> X;
        Y = (X * 15);
        cout << Y << endl;
    }
    return 0;
}