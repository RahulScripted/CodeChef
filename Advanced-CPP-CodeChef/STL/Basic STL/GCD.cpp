// Given N integers, find their gcd.



#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i = 0;i <n;i++) cin>>arr[i];
    
    int gc = arr[0];
    for(int i = 1;i < n;i++) gc = __gcd(arr[i],gc);
    
    cout<<gc<<endl;
    return 0;
}