// JJ has an array A of size N. He can perform the following operations on the array at most K times:

// 1.  Set Ai = Ai + 1 where 1 <= i <= (N - 1)

// 2.  Set Ai = Ai - 1 where 2 <= i <= N 

// He wants to maximize the value of the minimum element of the array A. 





#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int arr[n];
        for(int i = 0;i < n;i++) cin>>arr[i];
        
        k = min(k,n - 1);
        sort(arr,arr + n);
        
        for(int i = 0;i < n;i++){
            if(i == k){
                cout<<arr[i]<<endl;
                break;
            }
        }
    }

}