// Alice likes numbers which are even, and are a multiple of 7. Bob likes numbers which are odd, and are a multiple of 9. Alice, Bob, and Charlie find a number A. If Alice likes A, Alice takes home the number. If Bob likes A, Bob takes home the number. If both Alice and Bob don't like the number, Charlie takes it home. Given A, find who takes it home.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    if(n % 2 == 0 && n % 7 == 0) cout<<"Alice"<<endl;
	    else if(n % 2 == 1 && n % 9 == 0) cout<<"Bob"<<endl;
	    else cout<<"Charlie"<<endl; 
	}
}