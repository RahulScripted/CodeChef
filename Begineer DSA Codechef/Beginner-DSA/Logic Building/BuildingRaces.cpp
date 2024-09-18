// Two friends Chef and Chefina are currently on floors A and B respectively. They hear an announcement that prizes are being distributed on the ground floor and so decide to reach the ground floor as soon as possible. Chef can climb down X floors per minute while Chefina can climb down Y floors per minute. Determine who will reach the ground floor first (ie. floor number 0). In case both reach the ground floor together, print Both.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        double chef = a / double(x);
        double chefina = b / double(y);
        
        if(chefina < chef) cout<<"Chefina"<<endl;
        else if(chefina == chef) cout<<"Both"<<endl;
        else cout<<"Chef"<<endl;
    }
}