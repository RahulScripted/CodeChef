// Given A,B, and C as the sides of a triangle, find whether the triangle is scalene.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a != b && a != c && b != c) cout<<"Yes"<<endl;
        
        else cout<<"No"<<endl;
    }
}