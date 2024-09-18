// You are given an integer X. Find the smallest number Y such that : Y is greater than X. All digits of Y are pairwise different.




#include <bits/stdc++.h>
using namespace std;
int uniqueAndGreater(int x){
    vector<int>v(10,0);
    while(x){
        int rem = (x % 10);
        v[rem]++;
        x /= 10;
    }
    for(int num : v){
        if(num > 1) return false;
    }
    return true;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        while(true){
            ++x;
            if(uniqueAndGreater(x)){
                cout<<x<<endl;
                break;
            }
        }
    }
}