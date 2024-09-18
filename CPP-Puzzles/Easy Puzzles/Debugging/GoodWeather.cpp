// The weather report of Chefland is Good if the number of sunny days in a week is strictly greater than the number of rainy days. Given 7 integers A1,A2,A3,A4,A5,A6 and A7. where Ai = 1 denotes that the ith day of week in Chefland is a sunny day, Ai = 0 denotes that the ith day of week in Chefland is a rainy day in Chefland is a rainy day. Determine if the weather report of Chefland is Good or not.




#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int sunny=0;
	    int rainy=0;
	    for (int i=0;i<7;i++){
	        int a;
	        cin>>a;
	        if (a==1) sunny++;
	        else rainy++;
	    }
	    
	    if(sunny > rainy) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}