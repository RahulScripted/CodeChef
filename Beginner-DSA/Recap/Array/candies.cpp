// Abhi is a salesman. He was given two types of candies, which he is selling in N different cities. For the prices of the candies to be valid, Abhi's boss laid down the following condition: A given type of candy must have distinct prices in all N cities. In his excitement, Abhi wrote down the prices of both the candies on the same page and in random order instead of writing them on different pages. Now he is asking for your help to find out if the prices he wrote are valid or not. More formally, you are given an array A of size 2N. Find out whether it is possible to split A into two arrays, each of length N, such that both arrays consist of distinct elements.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[2 * n];
        for(int i = 0;i < (2 * n);i++) cin>>arr[i];
        
        unordered_map<int,int>mp;
        for(int i = 0;i < (2 * n);i++){
            mp[arr[i]]++;
        }
        
        bool flag = true;
        for(auto i : mp){
            if(i.second >= 3){
                flag = false;
                break;
            }
        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}