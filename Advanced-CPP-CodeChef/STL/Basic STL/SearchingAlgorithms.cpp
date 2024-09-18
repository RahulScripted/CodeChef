// Given a sorted vector of N integers, along with three other integers S, L and U. Check if S exists in the vector, if it exists, print YES, else NO. Find the lower bound of L and upper bound of U.




#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,s,l,u;
    cin>>n>>s>>l>>u;
    
    vector<int>arr(n);
    for(int i = 0;i < n;i++) cin >> arr[i];
    
    bool found = binary_search(arr.begin(),arr.end(),s);
    auto it1 = lower_bound(arr.begin(),arr.end(),l);
    auto it2 = upper_bound(arr.begin(),arr.end(),u);
    
    if(found) cout<<"YES ";
    else cout<<"NO ";
    cout<<*it1<<" "<<*it2<<endl;
}