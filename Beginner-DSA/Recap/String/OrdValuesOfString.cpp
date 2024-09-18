// You are given a string S. S can contain any alphanumeric character [0 - 9], [a - z] and [A to Z]. Create a new array A, as follows: For each character of string S - append its ord value or ASCII value to the list A. You need to generate and output the values in the array A.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	
	while(t--){
	    string S;
	    cin >> S;
	    int A[S.length()];
	    
	    for(int i = 0; i < S.length(); i++) A[i] = int(S[i]);
	    
	    for(int i = 0; i < S.length(); i++) cout << A[i] << " ";
	    cout << endl;    
	}
}