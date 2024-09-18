// There are N different types of colours numbered from 1 to N. Chef has Ai balls having colour i, (1 ≤ i ≤ N). Chef will arrange some boxes and put each ball in exactly one of those boxes. Find the minimum number of boxes Chef needs so that no box contains two balls of same colour.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i = 0;i < n;i++) cin>>arr[i];
        
        int maxi = INT_MIN;
        for(int i = 0;i < n;i++){
            if(maxi < arr[i]) maxi = arr[i];
        }
        cout<<maxi<<endl;
    }
}