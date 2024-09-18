// Alice, Bob, and Charlie participated in a 400-metre race. The time taken by Alice, Bob, and Charlie to complete the race was X,Y, and Z seconds respectively. Note that X,Y, and Z are distinct. Determine the person having the highest average speed in the race.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        
        float alice = (400.0 / x);
        float bob = (400.0 / y);
        float charlie = (400.0 / z);
        
        if(alice > bob && alice > charlie) cout<<"ALICE"<<endl;
        else{
            if(bob > charlie) cout<<"BOB"<<endl;
            else cout<<"CHARLIE"<<endl;
        }
    }
}