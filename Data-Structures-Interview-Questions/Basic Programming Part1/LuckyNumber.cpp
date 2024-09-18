// A positive integer X is called lucky if it has an even power of 2 in its prime factorization. More formally, let p be the largest integer such that X is divisible by 2^p. Then X is a lucky number if and only if p is divisible by 2. You are given a positive integer N. Find if it is a lucky number.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n % 2 != 0) cout<<1<<endl;
        else{
            int c = 0;
            while(n % 2 == 0){
                c++;
                n /= 2;
            }
            if(c % 2 == 0) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
}