// There is a circular track of length M consisting of M checkpoints and M bidirectional roads such that each road has a length of 1 unit. Chef is currently at checkpoint A and wants to reach checkpoint B. Find the minimum length of the road he needs to travel.




#include <iostream>
using namespace std;

int main() {
    int t; 
    cin>>t;
	while(t--){
	    int a,b,m;
	    cin>>a>>b>>m;
	    
	    int clockwise = abs(b - a);
	    int antiClockWise = m - abs(a - b);
	    
	    cout<<min(clockwise,antiClockWise)<<endl;
	}
}