// Given an integer N, create an array A of length N consisting of the first N integers - [1,2,3,...,N]. You need to output the following: Output the array A & Output the array A sorted in a descending order




// Update the '_' in the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	while(t--){
	    int N;
	    cin>>N;

	    int A[N];
	    for(int i = 1; i <= N; i++) A[i-1] = i;
        
	    for(int i = 0; i < N; i++) cout << A[i] << " ";
	    cout << endl;

	    for(int i = N-1; i >= 0; i--) cout << A[i] << " ";
	    cout << endl;
	}
}