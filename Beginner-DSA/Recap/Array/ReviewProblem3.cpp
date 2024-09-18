// There are N players standing between Gi-Hun and Ali in a straight line. The ith player having height Hi. Gi-Hun and Ali both have the same height, K. Gi-Hun wants to know the minimum number of players who need to be removed from the line so that Ali is visible in his line of sight given the following information Line of sight is a straight line drawn between the topmost point of two objects. Ali is visible to Gi-Hun if nobody between them crosses this line. Even if there are some players who have the same height as that of Gi-Hun and Ali, Ali will be visible in Gi-Hun's line of sight.




#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,count=0;
	    cin>>n>>k;
	    
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i] > k)count++;
	    }
	    
	    cout<<count<<endl;
	}
}