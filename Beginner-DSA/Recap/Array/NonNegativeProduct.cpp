// Alice has an array of N integers. She wants the product of all the elements of the array to be a non-negative integer. That is, it can be either 0 or positive. But she doesn't want it to be negative. To do this, she is willing to remove some elements of the array. Determine the minimum number of elements that she will have to remove to make the product of the array's elements non-negative.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	while(t--) {
	    int N;
	    cin >> N;
	    
	    int A[N];
	    for(int i = 0; i < N; i++) cin >> A[i];
	    
	    int count_neg = 0;
        int count_zero = 0;
        for(int i = 0; i < N; i++) {
            if(A[i] == 0){
                count_zero++;
                break;
            }
            else if(A[i] < 0) count_neg++;
        }
        
        if(count_zero == 0 && count_neg%2 != 0) cout << 1 << endl;
        else cout<<0<<endl;
	}
}	