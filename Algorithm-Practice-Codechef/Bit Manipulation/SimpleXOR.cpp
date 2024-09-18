// You are given two integers L and R(L + 3 ≤ R). Output any four distinct integers between L and R (inclusive) such that their bitwise XOR is zero. More formally, output any four integers a1,a2,a,a4 such that: a1 ⊕ a2 ⊕ a3 ⊕ a4 = 0 L ≤ a1,a2,a3,a4 ≤ R ai = aj if and only if i = j. If more than one such quadruple exists, you may output any of them. If no such quadruple exists, print -1 instead.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test case : ";
    cin>>testCase;
    while(testCase--){
        int l,r;
        cin>>l>>r;

        if(l % 2 == 0) cout<<l<<" "<<(l + 1)<<" "<<(l + 2)<<" "<<(l + 3)<<endl;

        else if(r <= (l + 3)) cout<<-1<<endl;
        
        else cout<<(l + 1)<<" "<<(l + 2)<<" "<<(l + 3)<<" "<<(l + 4)<<endl;
    }
}