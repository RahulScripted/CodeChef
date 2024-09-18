// Chef has infinite coins in denominations of rupees 5 and rupees 10. Find the minimum number of coins Chef needs, to pay exactly X rupees. If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print -1.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        if(n % 10 == 0) cout<<(n / 10)<<endl;
        
        else if(n % 5 == 0) cout<<((n / 10) + (n % 10) / 5)<<endl;
        
        else cout<<-1<<endl;
    }
}