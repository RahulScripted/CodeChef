// You are given the Time periods (T1,T2) and Semi-major Axes (R1,R2) of two planets orbiting the same star. Please determine if the Law of Periods is satisfied or not, i.e, if the constant of proportionality of both planets is the same.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;
        
        double first = pow(t1,2) / pow(r1,3);
        double second = pow(t2,2) / pow(r2,3);
        
        if(fabs(first - second) < 1e-9) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}