// In Chefland, there are N houses numbered from 1 to N, ith house has a defense system having strength Ai. Chef suspects a bomb drop on one of the houses very soon. 

// 1.  A bomb with attack strength X can destroy the ith house, if the defense system of the ith house Ai, is strictly less than X. 

// 2.  Also, when the ith house is destroyed due to the bomb, all houses with indices j such that 1 ≤ j < i get destroyed as well irrespective of their defense system. 

// Given one bomb with attack strength X, find the maximum number of houses that can get destroyed.





#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	while(t--){
	    int N,X;
	    cin >> N>>X;
	    
	    int A[N];
	    for(int i=0; i < N; i++) cin >> A[i];
	    
	    int count = 0;
	    for(int i=0; i < N; i++){
	        if(A[i] < X) count = i + 1;
	    }
	    
	    cout<<count<<endl;
	}
}