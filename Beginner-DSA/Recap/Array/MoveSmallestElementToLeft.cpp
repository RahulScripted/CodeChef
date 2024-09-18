// Given an array A of length N, please perform the following operations

// 1.  Find the smallest element of the array and move it to the leftmost position

// 2.  Output the updated array A




// Solution as follows

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

	    int minElement = A[0];
        int minElementIndex = 0;
        int i;
        for(i=1; i < N; i++){
            if (A[i] < minElement){
                minElement = A[i];
                minElementIndex = i;
            }
        }
        
        i = minElementIndex;
        while(i > 0){
            int temp = A[i];
            A[i] = A[i-1];
            A[i-1] = temp;
            i--;
        }
        
        for(int i=0; i < N; i++) cout<< A[i] << " ";
        cout << endl;
	}
}