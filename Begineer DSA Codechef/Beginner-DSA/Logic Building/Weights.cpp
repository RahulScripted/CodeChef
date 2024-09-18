// Chef is playing with weights. He has an object weighing W units. He also has three weights each of X,Y, and Z units respectively. Help him determine whether he can measure the exact weight of the object with one or more of these weights. If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        
        if(w == x || w == y || w == z) cout<<"Yes"<<endl;
        
        else if(w == (x + y) || w == (y + z) || w == (x + z)) cout<<"Yes"<<endl;
        
        else if(w == (x + y + z)) cout<<"Yes"<<endl;
        
        else cout<<"No"<<endl;
    }
}