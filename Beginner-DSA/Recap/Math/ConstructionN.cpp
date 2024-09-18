// You are given an integer N. Find if it is possible to represent N as the sum of several (possibly zero) 2's and several (possibly zero) 7's.




#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin >> t;
	while(t--){
	    int N;
	    cin >> N;
	    
	    bool possible = false;
	    for(int i = 0;i <= (N / 2);i++){
	        if((N - 2 * i) % 7 == 0){
	            possible = true;
	            break;
	        }
	    }
	    
	    if(possible) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}