// Given N non-negative integers, print its previous and next permutations.



#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i = 0;i < n;i++) cin>>arr[i];
    
    vector<int> copyArr = arr;
    
    next_permutation(copyArr.begin(),copyArr.end());
    for(int num : copyArr) cout<<num<<" ";
    cout<<endl;
    
    prev_permutation(arr.begin(),arr.end());
    for(int num : arr) cout<<num<<" ";
    cout<<endl;
    
    return 0;
}