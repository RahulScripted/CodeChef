// You are given an array A of length N. You can perform the following operation on the array any number of times: Choose any subsequence S of the array A and a positive integer X such that X is a power of 2 and subtract X from all the elements of the subsequence S. Find the minimum number of operations required to make all the elements of the array equal to 0.



#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    // cout<<"Enter the no. of test case : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;

        int arr[len];
        int count = 0;
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
            count |= arr[i];
        }

        cout<<__builtin_popcount(count)<<endl;
    }
}