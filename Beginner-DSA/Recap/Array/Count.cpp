// Given N space separated integers and an integer k, please perform the following operations: 

// 1.  Store the integers in the array A. Count all the items of the array A strictly greater than 0 and store it as the variable pos.

// 2.  Count all the items of the array A strictly lesser than 0 and store it as the variable neg.

// 3.  Count all items of the A which are divisible by k and store it as the variable divk.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	
	while(t--){
	    int N, K;
	    cin >> N >> K;
	    int A[N];
	    
        int pos = 0;
        int neg = 0;
        int divk = 0;
        for(int i = 0; i < N; i++) cin >> A[i];
        
        for(int i = 0; i < N; i++){
            // Count the negative elements of the array
            if(A[i] < 0) neg = neg + 1;
            
            // Count the positive elements of the array
            else if(A[i] >  0) pos = pos + 1;
            
            // Count if the given element is divisible by k
            if (A[i] % K == 0) divk = divk + 1;
        }
        cout << pos <<" "<< neg <<" "<< divk << endl;
	}
}