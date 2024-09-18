// Chef is currently standing at stair 0 and he wants to reach stair numbered X. Chef can climb either Y steps or 1 step in one move. Find the minimum number of moves required by him to reach exactly the stair numbered X.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        if(x % y == 0) cout<<(x / y)<<endl;
        else cout<<(x / y) + (x % y)<<endl;
    }
}