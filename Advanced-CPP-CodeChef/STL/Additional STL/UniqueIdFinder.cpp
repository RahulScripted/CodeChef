// You are given a vector of integers where each integer represents the ID of a user. However, there is exactly one user who has a duplicate ID. Your task is to find and return the ID of the user who has the duplicate ID.




#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    vector<int>arr;
    map<int,int>mp;
    
    int duplicate;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        mp[x]++;
        if(mp[x] > 1){
            duplicate = x;
            break;
        }
    }
    
    cout<<duplicate<<endl;
}