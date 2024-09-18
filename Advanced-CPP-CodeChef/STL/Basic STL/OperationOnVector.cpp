// Given N positive integers, write a program to calculate the product of partial sums of the integers. Also find whether the product of partial sums is divisible by both the minimum and maximum of the given integers. See sample test for more clarity.





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int>arr;
        int mini = INT_MAX,maxi = 0;
        for(int i = 0;i < n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
            
            if(arr[i] < mini) mini = arr[i];
            if(arr[i] > maxi) maxi = arr[i];
        }
        
        
        long long product = arr[0];
        for(int i = 1;i < n;i++){
            arr[i] += arr[i - 1];
            product *= arr[i];
        }
        
        
        if(product % mini == 0 && product % maxi == 0) cout<<product<<" "<<"YES"<<endl;
        else cout<<product<<" "<<"NO"<<endl;
    }
}