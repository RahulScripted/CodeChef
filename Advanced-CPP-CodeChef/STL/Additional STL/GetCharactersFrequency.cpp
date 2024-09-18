// You are given a string of size N. Count the number of distinct characters in it and also frequency of each character.




#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        string str;
        cin>>str;
        
        map<char,int>mp;
        for(int i = 0;i < n;i++) mp[str[i]]++;
        
        cout<<mp.size()<<endl;
        for(auto it : mp) cout<<it.first<<" "<<it.second<<endl;
    }
}