// Priya loves bitwise AND, but she hates programming. Help her solve this problem. Given an array A of size N, let Bij denote the bitwise AND of A[i] and A[j]. You have to find the number of pairs (i,j), such that i < j and Bij = A[i].



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of the array : ";
        cin>>len;

        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        int ans = 0;
        for(int i = 0;i < (len - 1);i++){
            for(int j = (i + 1);j < len;j++){
                int k = arr[i] & arr[j];
                if(arr[i] == k) ans++;
            }
        }
        cout<<ans<<endl;
    }
}