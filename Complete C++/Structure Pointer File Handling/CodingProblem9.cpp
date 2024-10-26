// You are given a list of T integers, for each of them you have to calculate the number of occurrences of the digit 4 in the decimal representation.





#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count = 0;
	    while(n > 0){
	        if(n % 10 == 4) count++;
	        n /= 10;
	    }
	    cout<<count<<endl;
	}
}