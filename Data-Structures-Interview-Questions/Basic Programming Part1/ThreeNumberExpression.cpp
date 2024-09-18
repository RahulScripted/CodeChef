// You are given T test-cases , in each testcase you are given three numbers A, B and C. Find that whether an expression of the form "xAyBzC" exists ( where x , y and z can be + or - ) , such that the final result is 0. If it exists print "YES" (without quotes), else print "NO"(without quotes).





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        
        if((a + b) - c == 0 || (a + c) - b == 0 || (b + c) - a == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}