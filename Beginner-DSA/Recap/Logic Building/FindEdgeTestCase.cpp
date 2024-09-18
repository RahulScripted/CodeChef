// You are given an array A of size 2N. Find out whether it is possible to split A into two arrays, each of length N, such that both arrays consist of distinct elements.



#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[2*n];
	    for(int i=0;i<2*n;i++) cin>>a[i];

	    for(int i=0;i<2*n;i++){
	      int count = 0;
	        for(int j=i+1;j<2*n;j++){
	            if(a[i]==a[j]) count++;
	        }
	        if(count>=2){
	            cout<<"No\n";
	            return 0;
	        }
	    }
	    cout<<"Yes\n";
	}
}