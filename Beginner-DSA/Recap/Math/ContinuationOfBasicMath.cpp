// You are given an integer N. You need to create and output to the console all the divisors of this integer in an ascending order.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        
        for(int i = 1;i <= n;i++){
            if(n % i == 0) cout<<i<<" ";
        }
        cout<<endl;
    }
}