// Chef wants to order food from a food delivery app. He wishes to order once today, and buy three items costing A1, A2, A3 rupees, respectively. He'll also order once tomorrow, when he'll buy three items costing B1, B2, B3 rupees, respectively. There is an additional delivery charge of rupees D for each order. He notices that there is a coupon on sale, which costs rupees C. If he buys that coupon, the delivery charges on any day, on an order of rupees 150 or more shall be waived (that is, the D rupees will not be added, if the sum of the costs of the items is ≥ 150). Should Chef buy the coupon? Note that Chef shall buy the coupon only if it costs him strictly less than what it costs him without the coupon, in total.




#include <iostream>
using namespace std;

int main() {
	int t; cin >>t;
	while(t--){
	    int d,c,a1,a2,a3,b1,b2,b3;
	    cin>>d>>c>>a1>>a2>>a3>>b1>>b2>>b3;
	    int v1,v2;
	    
	    v1 = a1 + a2 + a3 + b1 + b2 + b3 + d + d;
	    v2 = a1 + a2 + a3 + b1 + b2 + b3 + c;
	    
	    if(a1 + a2 + a3 < 150) v2 += d;
	    if(b1 + b2 + b3 < 150) v2 += d;
	    
	    if(v2 < v1) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
}