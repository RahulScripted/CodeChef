// A monster has H health points. Each time you hit it with a sword it loses X health points. However, the monster always gains Y health points right before every one of your hits. The monster is considered defeated when the number of health points it has becomes zero or less than zero. You need to find if it is possible to defeat the monster.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long h,x,y;
        cin>>h>>x>>y;
        
        if(y >= x) cout<<0<<endl;
        else cout<<1<<endl;
    }
}
