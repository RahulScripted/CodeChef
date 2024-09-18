// You are given a binary string S of length N. You want to obtain a palindrome from S by applying the following operation at most ⌊N / 2⌋ times: Choose an index i(1 ≤ i ≤ ∣S∣), delete the character Si from S and concatenate the remaining parts of the string. Here |S| denotes the current length of string S. Note that after each operation, the length of the string S decreases by one.Find any palindrome you can obtain after the operations. It can be proved that it is always possible to obtain a palindrome from S under the given constraints. Here, ⌊N / 2⌋ denotes floor division of the integer N by 2. A binary string is a string that consists of only the characters 0 and 1.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int count0 = 0,count1 = 0;
        for(int i = 0;i < n;i++){
            if(s[i] == '1') count1++;
            else count0++;
        }

        if(count1 > count0){
            for(int i = 0;i < count1;i++) cout<<'1';
        }
        else{
            for(int i = 0;i < count0;i++) cout<<'0';
        }
        
        cout<<endl;
    }
}