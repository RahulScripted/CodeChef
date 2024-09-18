// You are given an integer N. You need to output the sum of all even integers from 1 to N.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
    int sum = 0;
    for(int i = 0;i <= n;i+= 2) sum += i;
    
    cout<<sum<<endl;
}