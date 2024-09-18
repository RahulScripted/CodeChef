// Given an array of length n, we need to perform m query o ver the array.In each query you need to find the sum of the element in the range a to b.




#include <bits/stdc++.h>
using namespace std;
int main() {
    int len;
    // cout<<"Enter the length : ";
    cin>>len;
    int arr[len];
    for(int i = 0;i < len;i++) cin>>arr[i];
    
    // Prefix
    vector<long long>pre(len,0);
    for(int i = 0;i<len;i++){
        if(i!=0) pre[i] += pre[i-1];
        pre[i] += arr[i];
    }
    int queries;
    cin>>queries;
    while(queries--){
        int left,right;

        // cout<<"Enter the left : ";
        cin>>left;
        
        // cout<<"Enter the right : ";
        cin>>right;
    
        if((left - 1) == 0) cout<<pre[right - 1]<<endl;
        else cout<<pre[right- 1] - pre[left - 2]<<endl;
    }
}