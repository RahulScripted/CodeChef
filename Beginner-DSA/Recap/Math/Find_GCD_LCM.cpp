// You are given two integer A and B. You need to compute and output the Greatest common divisor and Least common multiple of these 2 numbers and store them in the variables gcd and lcm.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        
        int gcd_cal = __gcd(A,B);
        int lcm = gcd_cal * (A / gcd_cal) * (B / gcd_cal);
        
        cout<<gcd_cal<<" "<<lcm<<endl;
    }
}