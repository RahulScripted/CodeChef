// Chef and Chefina are at positions X and Y on a number line. They both love badminton. It is known that badminton courts are located at every integer point. They want to find a court such that the maximum distance traveled by either of them is minimized.




#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    
	    int maxi = max(x,y);
	    cout<<maxi - ((x + y) / 2)<<endl;
	}
}