// There are N students living in the dormitory of Berland State University. The head of the dormitory came up with a timetable for kitchen's usage in order to avoid the conflicts:

// 1.  The first student starts to use the kitchen at the time 0 and should finish the cooking not later than at the time A1.

// 2.  The second student starts to use the kitchen at the time A1 and should finish the cooking not later than at the time A2 and so on.

// 3.  The N-th student starts to use the kitchen at the time AN-1 and should finish the cooking not later than at the time AN

// 4.  It is known that the i-th student needs Bi units of time to cook.

// 5.  The students have understood that probably not all of them will be able to cook everything they want.


// How many students will be able to cook without violating the schedule?






#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int N;
        cin >> N;
        int A[N], B[N];

        for (int j = 0; j < N; j++) cin >> A[j];
        for (int j = 0; j < N; j++) cin >> B[j];

        int count = 0;
        for(int i=0;i<N;i++){
            if((A[0] >= B[0] && i == 0)) count++;
            if((A[i] - A[i-1]) >= B[i] && i != 0) count++;
        }
        
        cout << count << "\n";
    }
}