// There are N students living in the dormitory of Berland State University. The head of the dormitory came up with a timetable for kitchen's usage in order to avoid the conflicts:

// 1.  The first student starts to use the kitchen at the time 0 and should finish the cooking not later than at the time A1.

// 2.  The second student starts to use the kitchen at the time A1 and should finish the cooking not later than at the time A2 and so on.

// 3.  The N-th student starts to use the kitchen at the time AN-1 and should finish the cooking not later than at the time AN

// 4.  It is known that the i-th student needs Bi units of time to cook.

// 5.  The students have understood that probably not all of them will be able to cook everything they want.

// How many students will be able to cook without violating the schedule?





#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	while(t--){
	    int N;
	    cin >> N;
	    
	    int A[N], B[N];
	    for(int i=0; i < N; i++) cin >> A[i];  
	    for(int i=0; i < N; i++) cin >> B[i];  
	    
	    int count = 0,sum = 0;
	    for(int i = 0;i < N;i++){
	        if(i == 0) sum = A[i];
	        else sum = A[i] - A[i - 1];
	        if(sum >= B[i]) count++;
	    }
	    
	    cout<<count<<endl;
	}
}