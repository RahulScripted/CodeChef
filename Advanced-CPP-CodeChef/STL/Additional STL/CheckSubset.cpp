// Given two sets of integers, A and B, check if B is subset of A or not.



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
    
    bool flag = true;
    for(int i = 0;i < b;i++){
        int x;
        cin>>x;
        if(!s1.count(x)){
            flag = false;
            break;
        }
    }
    
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}