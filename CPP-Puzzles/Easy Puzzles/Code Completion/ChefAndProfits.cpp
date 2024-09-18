// Some time ago, Chef bought X stocks at the cost of Rs. Y each. Today, Chef is going to sell all these X stocks at Rs. Z each. What is Chef's total profit after he sells them? Chef's profit equals the total amount he received by selling the stocks, minus the total amount he spent buying them.




#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    int cost = (x * y),sell = (x * z);
	    cout<<abs(cost - sell)<<endl;
	}
}