// Given N positive integers, check if maximum value is divisible by minimum.



#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i = 0;i < n;i++) cin>>arr[i];
    
    int max_ele = *max_element(arr.begin(),arr.end());
    int min_ele = *min_element(arr.begin(),arr.end());
    
    if(max_ele % min_ele == 0) cout<<"YES"<<endl;
    else cout<<"No"<<endl;
}