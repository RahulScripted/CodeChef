// Chef loves to play with arrays by himself. Today, he has an array A consisting of N distinct integers. He wants to perform the following operation on his array A. Select a pair of adjacent integers and remove the larger one of these two. This decreases the array size by 1. Cost of this operation will be equal to the smaller of them. Find out minimum sum of costs of operations needed to convert the array into a single element.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long n;
        cin>>n;
        
        vector<int>arr(n);
        for(int i = 0;i < n;i++) cin>>arr[i];
        
        int minEle = *min_element(arr.begin(),arr.end());
        cout<<(n - 1) * minEle<<endl;
    }
}