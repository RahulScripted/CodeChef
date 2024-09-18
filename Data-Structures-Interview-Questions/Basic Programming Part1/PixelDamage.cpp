// You are given a rectangle with dimensions H x W, where H and W are positive integers representing the vertical and horizontal dimensions of the rectangle respectively. You are also given a point P which is at distance X from the rectangle's left edge and at distance Y from the rectangle's top edge. Find whether the distance from the point P to the bottom right corner of the rectangle is strictly less than K.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long h,w,x,y,k;
        cin>>h>>w>>x>>y>>k;
        
        long long int result = pow((pow(abs(w-x),2) + pow(abs(h - y),2)),0.5);
        if(result >= k) cout<<0<<endl;
        else cout<<1<<endl;
    }
}