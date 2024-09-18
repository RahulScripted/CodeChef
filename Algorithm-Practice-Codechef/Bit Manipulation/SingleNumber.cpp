// You are given an array A1,A2,…,AN of length N. Each distinct element appears twice except for one. Find that single one.


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

        // XOR all the elements
        int ans = 0;
        for(int i = 0;i < len;i++) ans ^= arr[i];
        cout<<ans<<endl;
    }
}