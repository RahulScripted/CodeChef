// Given N non-negative integers, check if there is any duplicate value present.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int>arr(n);
        for(int i = 0;i < n;i++) cin>>arr[i];
        
        unordered_set<int>mp;
        bool flag = false;
        for(int i = 0;i < n;i++){
            if(mp.find(arr[i]) != mp.end()){
                flag = true;
                break;
            }
            mp.insert(arr[i]);
        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}