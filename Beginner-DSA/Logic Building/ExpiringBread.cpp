// Eikooc loves bread. She has N loaves of bread, all of which expire after exactly M days. She can eat upto K loaves of bread in a day. Can she eat all the loaves of bread before they expire?




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        
        if(n % k == 0){
            
            if((n / k) <= m) cout<<"Yes"<<endl;
            
            else cout<<"No"<<endl;
        }
        
        else{
            
            if((n / k) + 1 <= m) cout<<"Yes"<<endl;
            
            else cout<<"No"<<endl;
        }
    }
}