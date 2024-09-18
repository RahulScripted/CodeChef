// Luigi has an array A of N positive integers. He wants to make all elements of the array equal. In one move, he can: Choose an index (1 ≤ i ≤ N) and divide the element Ai by any one of its divisors. Find the minimum number of moves required to make all the elements of the array equal.


#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i < n;i++) cin>>arr[i];
        int gcdCalculation = arr[0];
        for(int i = 0;i < n;i++) gcdCalculation = __gcd(gcdCalculation,arr[i]);
        
        int moves = 0;
        for(int i = 0;i < n;i++){
            if(arr[i] != gcdCalculation) moves++;
        }
        cout<<moves<<endl;
    }
}