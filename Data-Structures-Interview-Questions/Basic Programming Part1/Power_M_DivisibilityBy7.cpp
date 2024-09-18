// Quick! You need to solve this problem in order to help the Chef get an A on a math exam! The problem is as follows: You are given two integers: X and M. Now, you need to replace each digit of X (let’s call them di) with dim mod10. Let’s call the new number Y and reverse it. Check whether Y is divisible by 7.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int x, m;
        cin >> x >> m;
        
        int power = (m  % 4);
        if(power == 0 && m > 0) power = 4;
        
        long int y = 0;  
        while (x) {
            int digit = pow(x % 10, power);
            digit %= 10;
            y = y * 10 + digit;
            x /= 10;
        }
        
        if (y % 7) cout << "NO"<<endl;
        else cout << "YES"<<endl;
     }
}