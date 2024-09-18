// Chef wants to appear in a competitive exam. To take the exam, there are following requirements:

// 1.  Minimum age limit is X 

// 2.  Age should be strictly less than Y.

// Chef's current Age is A. Find whether he is currently eligible to take the exam or not.





#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int X, Y, A;
        cin >> X >> Y >> A;
        
        if(A >= X && A < Y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}