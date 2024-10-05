// You are given an integer N. You need to output the first N numbers of the Fibonacci Series.





#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int prev1 = 0;
	int prev2 = 1;
	cout<<prev1<<" "<<prev2<<" ";
	for(int i = 2;i < n;i++) {
	    int temp = (prev1 + prev2);
	    prev1 = prev2;
	    prev2 = temp;
	    cout<<temp<<" ";
	}
}