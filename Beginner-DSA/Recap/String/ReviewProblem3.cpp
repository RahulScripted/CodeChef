// You are given a string A of length N consisting of only lowercase english letters. You need to generate B of length N which meets the following criteria. Each element of B is a lowercase english letter. Each element of B is opposite of A.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	
	while(t--){
        string A, B = "";
	    cin >> A;
	    
	    for(int i = 0;i < A.length();i++){
	        B += 'z' - (A[i] - 'a');
	    }
	    cout<<B<<endl;
	}
}