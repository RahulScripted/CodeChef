// You are given an integer N. You need to output the sum of all even integers from 1 to N.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int sum = 0;
	for(int i = 1;i <= n;i++){
	    if(i % 2 == 0) sum += i;
	}
	
	cout<<sum<<endl;
}