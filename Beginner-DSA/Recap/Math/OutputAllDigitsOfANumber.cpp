// You are given an integer N. You need to create and output to the console all the digits of this integer, each separated by a space.



#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	while(t--){
	    int N;
	    cin >> N;
	    
	    int final_ans[7];
	    int j = 0;
	    
	    while(N > 0){
	        final_ans[j++] = (N % 10);
	        N /= 10;
	    }
	    
	    for(int i = j-1; i >= 0; i--) cout << final_ans[i] << " ";
	    cout << endl;
	}
}