// Chef has a sequence of integers A of length N. He creates another sequence B of length 2 . N using sequence A. Initially, B is empty. Chef performs the following process. For each element Ai(1 ≤ i ≤ N) of A:

// 1.  Choose any arbitrary integer k (Note that the value of k can be different for different elements).

// 2.  Add Ai - k and Ai + k to B.

// Chef then shuffles the sequence B randomly after this process. Since Chef is careless, he lost both A and B and now only vaguely remembers the elements of B. Chef would like to know if the sequence B (which he vaguely remembers) can be correct or not. Can you help him?Formally, you are provided with a sequence B of size 2 . N. You are required to tell if the provided sequence can be achieved from any sequence A of size N using the given process or not.





#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int N;
        cin >> N;

        int N2 = 2 * N;
        long long int b[N2];
        for (int i = 0; i < N2; i++) {
            cin >> b[i];
        }

        string s;
        int odd = 0, even = 0;
        for (int i = 0; i < N2; i++) {
            if (b[i] % 2 == 0) even += 1;
            else odd += 1;
        }
        
        if ((even % 2 != 0) || (odd % 2 != 0)) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
}