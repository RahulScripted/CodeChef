// You are given an array A of length N. An element X is said to be dominant if the frequency of X in A is strictly greater than the frequency of any other element in A. Find if there exists any dominant element in A.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        
        int a[n];
        vector<int> count(n+1,0);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            count[a[i]]++;
        }
        
        sort(count.begin(),count.end());
    
        if(count[n] != count[n - 1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}