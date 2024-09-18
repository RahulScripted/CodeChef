// Chef has a binary string S of length N. Chef can perform the following operation on S any number of times. Insert any character (0 or 1) at any position in S. Find the minimum number of operations Chef needs to perform so that no two consecutive characters are same in S.





#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	
	while(t--){
	    int N;
	    cin >> N;
	    
	    string S;
	    cin >> S;
	    
	    int count = 0;
	    for(int i = 0;i < (N - 1);i++){
	        if((S[i] == '0' && S[i + 1] == '1') || (S[i] == '1' && S[i + 1] == '0')) continue;
	        else count++;
	    }
	    
	    cout<<count<<endl;
	}	
}