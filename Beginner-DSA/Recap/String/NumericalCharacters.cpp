// Recall that for some programming problems, it is beneficial to treat numbers as strings. You are given 2 integers A and B - they contain the same number of digits. You need to determine if these numbers are reverse of each other.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	
	while(t--){
	    string A,B;
	    cin >> A >> B;
        
	    int n = A.length();
	    int i = 0;
	    int flag = 1;
	    
	    while(i < n){
	        if ( A[i] != B[n - i - 1] ){
	            flag = 0;
	            break;
	        }
	        i++;
	    }
	    
	    if (flag == 0) cout << "NO" << endl;
	    else cout << "YES" << endl;
	}
}