// In order to beat the evil monster, you need to answer T of its queries. In each query, the monster gives you 3 positive integers X, Y and Z. For each of the monsters query you need to find the smallest positive integer K such that:

// 1.  K is strictly greater than X

// 2.  K is divisible by Y

// 3.  K is not divisible by Z

// 4.  Or determine that there is no such K





#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
	cin>>T;
	while(T--){
	    long long X,Y,Z;
	    cin>>X>>Y>>Z;
	    
	    if(Z == 1 || Z == Y || Y%Z == 0){
	        cout<<-1<<endl;
	        continue;
	    }
	    
	    long long m = (X/Y) + 1;
	        
	    while(!((Y*m)%Z != 0)) m++;
	    cout<<Y*m<<endl;
	}
}