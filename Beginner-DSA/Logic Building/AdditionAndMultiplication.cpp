// Basic math and logic based programming problems are the correct starting point for Beginners. In the previous module, we have learnt how to accept multiple inputs and test cases. The current module will use our knowledge of C++ syntax and learnings from the previous module




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int A, B, S, P;
        cin >> A >> B;
        S = A + B;
        P = A * B;
        cout << S << " " << P << endl;
    }
    return 0;
}