// Chef appeared for an exam consisting of 3 sections. Each section is worth 100 marks. Chef scored A marks in Section 1, B marks in section 2, and C marks in section 3. Chef passes the exam if both of the following conditions satisfy:

// 1.  Total score of Chef is ≥ 100;

// 2.  Score of each section ≥ 10.

// Determine whether Chef passes the exam or not.





#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int A, B, C;
        cin >> A >> B >> C;
        int total_score = A + B + C;
        int minimum_score = min(A, min(B, C));

        if (total_score >= 100 && minimum_score >= 10)  cout << "PASS" << endl;
        else cout << "FAIL" << endl;
    }
}