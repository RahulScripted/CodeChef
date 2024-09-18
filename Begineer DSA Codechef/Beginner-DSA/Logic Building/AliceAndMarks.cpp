// Alice has scored X marks in her test and Bob has scored Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.





#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;

    if(X >= (2 * Y)) cout<<"Yes"<<endl;
    
    else cout<<"No"<<endl;
}