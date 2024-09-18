// There are N kid cyborgs with Chief Cyborg and he has K weapons with him. Since all the kid cyborgs are very good friends, so they set a rule among themselves for taking those weapons. The rule states that the difference between kid cyborg having the maximum weapons and the kid cyborg having minimum weapons should be less than or equal to 1. Find the value of the minimum number of weapons a kid cyborg can have when all the K weapons are distributed among them.





#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	
	while(t--){
	    int K, N;
	    cin >> N >> K;
	    cout <<(K / N) << endl;
	}
}