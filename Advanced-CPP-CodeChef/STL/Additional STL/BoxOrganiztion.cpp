// Alex has N empty boxes. Each box i, where 1 ≤ i ≤ n, is a cube with a side length of ai. Alex can place a smaller box i inside a larger box j given the following conditions:

// 1.  Box i is not already placed inside another box.
// 2.  Box j is empty and doesn't contain any other boxes.
// 3.  The side length of box i is smaller than the side length of box j (ai < aj).

// Alex can place boxes inside each other multiple times. His goal is to minimize the number of visible boxes. A box is considered visible if it's not placed inside another box. Help Alex determine the minimum number of visible boxes possible!





#include<bits/stdc++.h>
using namespace std;

int main() { 
    int n;
    cin>>n;
    
    map<int,int>mp;
    vector<int>arr(n);
    
    for(int i = 0;i < n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    
    int mx = 0;
    for(auto i : mp) mx = max(mx,i.second);
    
    cout<<mx<<endl;
}