// You are given an array A of size N. In one operation, you can do the following: Select indices i and j (i ≠ j) and set Ai = Aj. Find the minimum number of operations required to make all elements of the array equal.




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
        int max = count[n];
   
        cout<<n-max<<endl;
    }
}