// In a class of N students, a class test was held. The ith student scored Ai marks. It is also known that the scores of all students were distinct. A student passes the test if their score is strictly greater than the passing mark. Given that exactly X students pass in the test, find the maximum value of the passing mark of the test.





#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        int N, X; 
        cin >> N >> X;

        int A[N];
        for(int j = 0; j < N; j++) cin >> A[j];

        sort(A, A + N);
        cout << A[N - X] - 1 << "\n";
    }
}