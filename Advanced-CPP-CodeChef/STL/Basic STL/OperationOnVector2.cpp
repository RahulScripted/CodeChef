// Given N positive integers and a value x, write a program to replace all x with x + 1.




#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    
    vector<int>arr;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    for(int i = 0;i < n;i++){
        if(arr[i] == k) arr[i]++;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}