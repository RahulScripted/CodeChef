// Given two vectors of integers, find the common unique elements which are present in both the vectors.




#include<bits/stdc++.h>
using namespace std;

int main() { 
    int a,b;
    cin>>a>>b;
    
    set<int>s1,s2;
    for(int i = 0;i < a;i++){
        int x;
        cin>>x;
        s1.insert(x);
    }
    
    for(int i = 0;i < b;i++){
        int x;
        cin>>x;
        if(s1.count(x)) s2.insert(x);
    }
    
    for(int val : s2) cout<<val<<" ";
    cout<<endl;
}