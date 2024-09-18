// A (1-indexed) binary string S of length N is called a xor palindrome if the value of Si ⊕ S(N + 1 - i) is the same for all 1 ≤ i ≤ N. You are given a binary string S of length N. Determine if it is possible to rearrange it to form a xor palindrome or not.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test case : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;

        string s;
        cin>>s;
        int count0 = 0,count1 = 0;
        for(auto &c : s){
            if(c == '0') count0++;
            else count1++;
        }
        if(len % 2 == 1) cout<<"YES"<<endl;
        else{
            if((count1 == count0) || (count0 % 2 == 0) || (count1 % 2 == 0)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}