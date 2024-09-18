// Given an array A of length N, please perform the following operations:

// 1.  Find the largest element of the array A - store it as the variable large

// 2.  Find the right-most index of the largest element of the array - store it as the variable right.






#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	while(t--){
	    int N;
	    cin >> N;
        
	    int A[N];
	    for(int i=0; i < N; i++) cin >> A[i];
        
        int right = 0;
        int large = -100;
        for(int i=0; i < N; i++){
	        if (A[i] >= large){
	            large = A[i];
                right = i;
	        }
	    }

	    cout << large << " "<< right << endl;
	}
}