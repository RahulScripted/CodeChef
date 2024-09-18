// Chef has N items in his shop (numbered 1 through N); for each valid i, the price of the i-th item is Pi. However, the government introduced a price ceiling K, which means that for each item i such that Pi > K, its price should be reduced from Pi to K. Chef's revenue is the sum of prices of all the items he sells. Find the amount of revenue which Chef loses because of this price ceiling.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	while(t--){
	    int N, K;
	    cin >> N >> K;
	    
	    int P[N];
	    int L[N];
	    for(int i=0; i < N; i++) cin >> P[i];
	    
	    for(int i=0; i < N; i++){
	        if(P[i] > K)  L[i]=K;
	        else L[i]=P[i];
	    }
	    
	    int sumP = 0;
	    int sumL = 0;
	    for(int i =  0; i < N; i++){
	        sumL += L[i];
	        sumP += P[i];
	    }
	    
	    cout << sumP - sumL << endl;
	}
}